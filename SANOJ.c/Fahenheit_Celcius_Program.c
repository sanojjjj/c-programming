#include <stdio.h>
int main()
{
    int choice = "\0";
    float Fahrenheit = 0.0f;
    float Celcius = 0.0f;

    printf("Tempreature Conversion Program\n");
    printf("1:It convert Celcius to Fahrenheit\n");
    printf("2:It convert Fahrenheit to Celcius\n");
    printf("If You Choice 1 or 2::");
    scanf("%d",&choice);


    if(choice == 1)
    {
        printf("Enter the value in Fahrenheit:");
        scanf("%f",&Fahrenheit);
        Fahrenheit = (Celcius*9/5)+32;
        printf("%.1f Fahrenheit is equal to %.1f Celcius",Celcius,Fahrenheit);

    }
    else if(choice == 2)
    {
        printf("Enter the value in Celcius:");
        scanf("%f",&Celcius);
        Celcius = (Fahrenheit - 32)*5/9;
        printf("%.1f celcius is equal to %.1f Fahrenheit",Celcius,Fahrenheit);

    }
    else
    {
        printf("INVALID STATEMENT");
    }


}