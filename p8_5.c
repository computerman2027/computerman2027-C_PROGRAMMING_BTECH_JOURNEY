#include<stdio.h>
int isLeapYear(int year);
int main()
{
    int year;
    printf("enter a year : ");
    scanf("%d",&year);
    if(isLeapYear(year))
    {
        printf("%d is a leap year",year);
    }
    else
    {
         printf("%d is not a leap year",year);
    }
    return 0;
}

int isLeapYear(int year)
{
    if(year<1)
    return 0;
    if(year%400==0 ||(year%100!=0 && year%4==0))
    {
        return 1;
    }
    return 0;
}