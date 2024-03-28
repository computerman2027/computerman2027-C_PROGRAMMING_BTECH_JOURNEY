#include<stdio.h>
int fact(int n);

int main()
{
    int num;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("INVALID INPUT");
    }
    else
    {
        printf("Factorial of %d is %d",num,fact(num));
    }
}
int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}