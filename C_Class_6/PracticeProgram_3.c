//Practice Program 3 from Lecture 6
#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,z, result;

    printf("Enter x: ");
    scanf("%lf",&x);

    printf("Enter y: ");
    scanf("%lf",&y);

    printf("Enter z: ");
    scanf("%lf",&z);


    result = 3*pow(x,4) + 2*pow(x*y,1.0/2.0)-pow(z,1.0/3.0)+5*x*y;
    printf("The result is %.2lf",result);

    return 0;
}

