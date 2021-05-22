#include <stdio.h>
#include <stdlib.h>

int main()
{
    double average,num1,num2,num3,num4,num5;
    printf("Enter marks of Subject 1: ");
    scanf("%lf",&num1);
    printf("Enter marks of Subject 2: ");
    scanf("%lf",&num2);
    printf("Enter marks of Subject 3: ");
    scanf("%lf",&num3);
    printf("Enter marks of Subject 4: ");
    scanf("%lf",&num4);
    printf("Enter marks of Subject 5: ");
    scanf("%lf",&num5);
    average=(num1+num2+num3+num4+num5)/5;
    if(average>=75)
    {
        printf("Pass");
    }else
    {
        printf("Fail");
    }
    system("pause>0");
}
