#include <stdio.h>
int main()
{

    // CALCULATOR PROGRAM

char operator = '\0';
double num1 = 0.0;
double num2 = 0.0;
double result = 0.0;

printf("enter the first number: ");
scanf("%lf", &num1);

printf("enter the operator + - * / : ");
scanf(" %c", &operator);  // Notice the space before %c


printf("enter the second number: ");
scanf("%lf", &num2);


switch(operator)
{
    case '+':
        result = num1+num2;
        break;

    case '-':
        result = num1-num2;
        break;  

    case '*':
        result = num1*num2;
        break;
        
    case '/':
        if(num2==0)
        {
            printf("you can't divide by zero!\n");
        }
        else
        {
            result = num1/num2;
        }
        break;

    
    default:
        printf("invalid statement");
        break;
        
}

printf("result: %.4lf",result);

return 0;

}