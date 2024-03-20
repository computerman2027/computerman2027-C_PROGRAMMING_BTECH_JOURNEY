#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2;
	printf("ENTER COEEFICIENT OF QUADRATIC EQUATION ");
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d<0)
	{
		printf("IMAGINARY ROOT");
	}
	else
	{
		r1=((-b)+sqrt(d))/(2*a);
		r2=((-b)-sqrt(d))/(2*a);
		printf("Roots of the quadratic equation are %f and %f",r1,r2);
	}
	return 0;
}
