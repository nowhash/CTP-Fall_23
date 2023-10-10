//C Program to find the area of cylinder
#include <stdio.h>
#define PI 3.1416

int main()
{
    double r = 5.20, h = 20.25;
    double area;

    area= PI * r*r*h;

    printf("The computed area is: %.2lf",area);


    return 0;
}

