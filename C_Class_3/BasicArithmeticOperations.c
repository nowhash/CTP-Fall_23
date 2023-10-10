#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 5;
    int sum,diff,product, quotient,reminder;

    sum=num1+num2;
    diff=num1-num2;
    product=num1*num2;
    quotient=num1/num2;
    reminder=num1%num2;

    printf("The sum is %d\n",sum);
    printf("The difference is %d\n",diff);
    printf("The product is %d\n",product);
    printf("The quotient is %d\n",quotient);
    printf("The reminder is %d\n",reminder);

    return 0;

}
