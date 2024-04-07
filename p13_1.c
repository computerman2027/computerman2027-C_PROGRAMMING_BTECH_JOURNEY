#include<stdio.h>
void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main()
{
    int a,b;
    int *p1,*p2;
    p1=&a;    
    p2=&b;    
    printf("ENTER A NUMBER(a) : ");
    scanf("%d",&a);
    printf("ENTER A NUMBER(b) : ");
    scanf("%d",&b);
    printf("Before swapping a = %d and b = %d \n",a,b);
    swap(p1,p2);
    printf("After swapping a = %d and b = %d \n",a,b);
    return 0;
}