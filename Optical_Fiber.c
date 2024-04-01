#include<stdio.h>
#include<math.h>

#define MAX_MEASUREMENTS 10 // Maximum number of measurements

int main()
{
    int num_measurements;
    float L[MAX_MEASUREMENTS], d[MAX_MEASUREMENTS], NA[MAX_MEASUREMENTS], total_NA = 0;

    printf("Enter the number of measurements (up to %d): ", MAX_MEASUREMENTS);
    scanf("%d", &num_measurements);

    if (num_measurements > MAX_MEASUREMENTS || num_measurements <= 0) {
        printf("Invalid number of measurements. Exiting...\n");
        return 1;
    }

    // Input measurements
    printf("Enter the measured values of the distance from the end of the fiber to the screen (L):\n");
    for (int i = 0; i < num_measurements; i++) {
        scanf("%f", &L[i]);
    }

    printf("Enter the measured values of the diameter of the circular spot of light projected from the end of the fiber onto a screen (d):\n");
    for (int i = 0; i < num_measurements; i++) {
        scanf("%f", &d[i]);
    }

    // Calculate NA for each measurement
    for (int i = 0; i < num_measurements; i++) {
        NA[i] = d[i] / sqrt(pow(d[i], 2) + 4 * pow(L[i], 2));
        total_NA += NA[i];
    }

    // Calculate average NA
    float average_NA = total_NA / num_measurements;

    // Output NA for each measurement
    printf("\nNumerical Aperture (NA) for each measurement:\n");
    for (int i = 0; i < num_measurements; i++) {
        printf("Measurement %d: %f\n", i + 1, NA[i]);
    }

    printf("\nAverage Numerical Aperture (NA) for the given measurements: %f\n\n", average_NA);

    return 0;
}