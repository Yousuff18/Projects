#include<stdio.h>
#include<math.h>

int main()
{
    float NA1, NA2, NA3, NA4, NA5, NA6, NA7, d1, d2, d3, d4, d5, d6, d7, L1, L2, L3, L4, L5, L6, L7, NA;

    printf("Enter seven measured value of The distance from the end of the fiber to the screen(L):\n");
    scanf("\n%f\n%f\n%f\n%f\n%f\n%f\n%f", &L1, &L2, &L3, &L4, &L5, &L6, &L7);
    printf("Enter seven measured value of The diameter of the circular spot of light projected from the end of the fiber onto a screen(d):\n");
    scanf("\n%f\n%f\n%f\n%f\n%f\n%f\n%f", &d1, &d2, &d3, &d4, &d5, &d6, &d7);

    NA1 = d1/(sqrt(pow(d1, 2)+4*pow(L1, 2)));
    NA2 = d2/(sqrt(pow(d2, 2)+4*pow(L2, 2)));
    NA3 = d3/(sqrt(pow(d3, 2)+4*pow(L3, 2)));
    NA4 = d4/(sqrt(pow(d4, 2)+4*pow(L4, 2)));
    NA5 = d5/(sqrt(pow(d5, 2)+4*pow(L5, 2)));
    NA6 = d6/(sqrt(pow(d6, 2)+4*pow(L6, 2)));
    NA7 = d7/(sqrt(pow(d7, 2)+4*pow(L7, 2)));

    NA = (NA1+NA2+NA3+NA4+NA5+NA6+NA7)/7;

    printf("The Numerical Aperture of the given optical fiber, NA = %f", NA);

    if(NA <= 0)
    {
        prinf("the light enters the fiber at an angle greater than the acceptance angle.");
    }

    else if (NA >= 1)
    {
        printf("Check the input data as your data indicates that you have absolutely no internal diffraction or transmission loss\nif it's still correct then congratulation, you just solved the billion dollar problem");
    }
}