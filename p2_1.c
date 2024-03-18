#include<stdio.h>
int main()
{
    float radius,area;
    printf("Enter radius of a circle = ");
    scanf("%f",&radius);
    if(radius<0)
    {
        printf("INVALID INPUT");
    }
    else
    {
        area = 3.14 *radius*radius;
        printf("Area of circle = %.2f",area);
    }
    return 0;
}