#include<stdio.h>
int npr(int n, int r);
float ncr(int n, int r);
int factorial(int n);
int main()
{
    int a,b,c;
    printf("enter value of a : ");
    scanf("%d",&a);
    printf("enter value of b : ");
    scanf("%d",&b);
    printf("enter value of c : ");
    scanf("%d",&c);
    printf("Factorial of a is %d\n",factorial(a));
    printf("Permutation of b and c = %d\n",npr(b,c));
    printf("combination of b and c = %.2f\n",ncr(b,c));
    return 0;
}

int npr(int n, int r)
{
    return factorial(n)/(factorial(n-r));
}
float ncr(int n, int r)
{
    return factorial(n)/((float)(factorial(r)*factorial(n-r)));
}
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}