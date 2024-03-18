#include<stdio.h>
int main()
{
    int a,b,temp;
    //swapping with temporary variable
    printf("ENTER FIRST NUMBER (a)= ");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER (b)= ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping a = %d and b = %d \n",a,b);

    //swapping without temporary variable
    printf("ENTER FIRST NUMBER (a)= ");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER (b)= ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a = %d and b = %d",a,b);

    return 0;
}