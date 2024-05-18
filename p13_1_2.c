#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main()
{
    int *p1,*p2;
    p1=(int *)malloc(sizeof(int));   
    p2=(int *)malloc(sizeof(int));       
    printf("ENTER A NUMBER(a) : ");
    scanf("%d",p1);
    printf("ENTER A NUMBER(b) : ");
    scanf("%d",p2);
    printf("Before swapping a = %d and b = %d \n",*p1,*p2);
    swap(p1,p2);
    printf("After swapping a = %d and b = %d \n",*p1,*p2);
    return 0;
}