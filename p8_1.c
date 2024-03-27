#include<stdio.h>
#include<math.h>
void roots(float a, float b, float c);
int main()
{
    float a,b,c,d;
    printf("ENTER COEFICIENT OF QUADRATIC EQUATION ");
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
    if(d>=0)
    {
        roots(a,b,c);
    }
    else
    {
        printf("imaginary roots");
    }
    return 0;
}
void roots(float a, float b, float c)
{
    float r1,r2,d;
    d=(b*b)-(4*a*c);
    r1=((-b)+sqrt(d))/(2*a);
	r2=((-b)-sqrt(d))/(2*a);
    printf("ROOTS ARE %f and %f",r1,r2);
}