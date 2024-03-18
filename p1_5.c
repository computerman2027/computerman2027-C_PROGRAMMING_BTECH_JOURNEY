#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float temp1, temp2;
    int choice;
    printf("Menu \n 1. Deg Celsius to Deg Fahrenheit \n 2. Deg Fahrenheit to Deg Celsius \n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter temperature in Celsius \n");
        scanf("%f",&temp1);
        temp2=(temp1*9/5)+32;
        printf("Temperature in Fahrenheit is %f",temp2);

    }
    else if(choice==2)
    {
        printf("Enter temperature in Fahranheit \n");
        scanf("%f",&temp1);
        temp2=(temp1-32)*5/9;
        printf("Temperature in Celcius is %f",temp2);
    }
    else
    {
        printf("INVALID INPUT");
    }
    return 0;
}