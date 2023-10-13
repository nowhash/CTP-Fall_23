#include <stdio.h>

int main()
{
    double x,y,z,result;

    printf("Enter x,y,z seperated by space: ");
    scanf("%lf %lf %lf",&x,&y,&z);


    result = x*y+y*z+z*x;

    printf("The result is %.2lf",result);

    return 0;
}
