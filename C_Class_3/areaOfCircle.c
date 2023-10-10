//C Program to find the area of a circle.
//Equation - pi*r*r
#include <stdio.h>
#define PI 3.1416

int main()
{
    double r = 5.20;
    double area;

    area= PI * r*r;

    printf("The computed area is: %.3lf",area);


    return 0;
}
