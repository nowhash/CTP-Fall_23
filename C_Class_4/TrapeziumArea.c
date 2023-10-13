#include <stdio.h>

int main()
{
    double a,b,h, area;

    printf("Enter a,b, and h: ");
    scanf("%lf %lf %lf",&a,&b,&h);

    area=(1.0/2.0)*(a+b)*h;

    printf("The Trapezium Area is: %.2lf",area);

    return 0;
}
