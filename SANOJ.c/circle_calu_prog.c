#include <stdio.h>
#include <math.h>

int main()
{
    

// Qsn 1) A = pi*r^2
// Qsn 2) A = 4*pi*r^2
// Qsn 3) A = (4/3)*pi*r^2


    double radius = 0;
    double area = 0;
    double surfacearea = 0;
    double volume = 0; 
    const double PI = 3.14;


    printf("enter the radius: ");
    scanf("%lf",&radius);

    //area = PI*radius*radius;
    

    area = PI*pow(radius,2);
    surfacearea = PI*4*pow(radius,2);
    volume = (4.0/3.0)*PI*pow(radius,3);

    printf("Area = %lf\n",area);
    printf("surfacearea = %lf\n",surfacearea);
    printf("volume = %lf",volume);
    
    return 0;
        
    
}