//Practice Program 1 from Lecture 6
#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,result,temp;

    printf("Enter x: ");
    scanf("%lf",&x);

    printf("Enter y: ");
    scanf("%lf",&y);

    //result = x*y+pow(x*y,2)+pow(x*y,3) + pow(x*y,4);

    temp=x*y;
    result = temp + pow(temp,2) + pow(temp,3) + pow(temp,4);


    printf("The result is %.2lf",result);

    return 0;
}
