#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER FIRST NUMBER (a)= ");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER (b)= ");
    scanf("%d",&b);
    printf("ENTER THIRD NUMBER (c)= ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%d is the largest number",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is the largest number",b);
    }
    else
    {
        printf("%d is the largest number",c);
    }
    return 0;
}