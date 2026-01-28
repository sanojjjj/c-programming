#include <stdio.h>
int main()
{
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;


    printf("WEIGHT CONVERTER PROGRAM\n");
    printf("1.convert pounds to kilograms\n");
    printf("2.convert kilograms to pounds\n");
    printf("enter your choice(1 or 2):");
    scanf("%d",&choice);
   

    if (choice == 1)
    {
        printf("Enter the weight in kilograms:\n");
        scanf("%f",&kilograms);
        pounds = kilograms*2.20462;
        printf("%.2f", kilograms,pounds);
    }
    else if (choice == 2)
    {
        printf("Enter the weight in pounds:");
        scanf("%f",&pounds);
        kilograms = pounds/2.20462;
        printf("%.2f", kilograms,pounds);
    }    
    else
    {
        printf("invalid choice");
    }
    return 0;
}

    


    
