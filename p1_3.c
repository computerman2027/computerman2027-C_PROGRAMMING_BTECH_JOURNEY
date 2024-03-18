#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,b,c,perimeter;
    float area,s;
    printf("Enter the length of three sides");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<=c || b+c<=a || c+a<=b)
    {
        printf("INVALID STATEMENT");
    }
    else
    {
    perimeter= (a+b+c);
    s=perimeter/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Perimeter of triangle = %d and area = %f",perimeter,area);
    }
    return 0;
}