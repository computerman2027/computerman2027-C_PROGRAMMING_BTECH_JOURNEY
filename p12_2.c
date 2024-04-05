#include<stdio.h>
#include<math.h>

union number{
    int i;
    float f;
};
struct values{
    union number x;
    union number y;
    float n;
};
float power(float x,float n)
{
    return pow(x,n);
}

int main()
{
    struct values v1;
    printf("enter value of base : ");
    scanf("%f",&v1.x.f);
    printf("enter value of power : ");
    scanf("%f",&v1.n);
    v1.y.f=power(v1.x.f,v1.n);
    printf("Ans = %.2f",v1.y.f);
    return 0;
}