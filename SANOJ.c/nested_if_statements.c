#include <stdio.h>
#include <stdbool.h>

int main()
{
    float price = 10.00;
    bool isStudent = false;
    bool isSenior = false;

    if(isStudent)
    {
        printf("you get a student discount 0f 10%\n");
        price *=0.9;
    }
    if(isSenior)
    {
        printf("you get a senior discount 0f 20%\n");
        price *=0.8;
    }
    printf("the price of a ticket is: $%.2f\n",price);

    return 0;
}