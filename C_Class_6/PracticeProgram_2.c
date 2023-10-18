//Practice Program 2 from Lecture 6

#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,result;

    printf("Enter x: ");
    scanf("%lf",&x);

    printf("Enter y: ");
    scanf("%lf",&y);

    //result = 3*pow(x,4)+2*sqrt(x*y) - 2;
    result = 3*pow(x,4) + 2*pow(x*y,1.0/2.0)-2;
    printf("The result is %.2lf",result);

    return 0;
}
