#include<stdio.h>
int main()
{
    int num,unit,tens;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    unit=num%10;
    tens=(num%100)/10;
    printf("Unit\'s place digit = %d \n Ten\'s place digit = %d",unit,tens);
    return 0;
}