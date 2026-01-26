#include <stdio.h>
#include <math.h>

int main()
{
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompound = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("enter the principal (p):");
    scanf("%lf", &principal);

    printf("enter the interest % (r):");
    scanf("%lf", &rate);

    printf("enter the no of years (t):");
    scanf("%d", &years);

    printf("enter no of timescompound per year (n):");
    scanf("%d", &timesCompound);

    total = principal * pow(1 + rate / timesCompound, timesCompound * years);

    printf("after %d years, the total will be $%lf", years, total);

    return 0;
}