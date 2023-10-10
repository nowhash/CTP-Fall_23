//C Program to compute remaidner and quotient.

#include <stdio.h>

int main()
{
    int dividend=25,divisior=4,q,r;

    q=dividend/divisior;
    r=dividend%divisior;

    printf("The Remainder is %d and Quotient is %d",r,q);


    return 0;
}
