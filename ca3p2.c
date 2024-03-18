#include<stdio.h>
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("The entered number is %s",num%2==0?"EVEN":"ODD");
    return 0;
}