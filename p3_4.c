#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2,realPart,imaginaryPart;
	printf("ENTER COEFICIENT OF QUADRATIC EQUATION ");
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d<0)
	{
		realPart=-b/(2*a);
		imaginaryPart = sqrt(-d)/(2*a);
		printf("Roots are complex and different: %.2f + %.2fi and %.2f - %.2fi \n",realPart,imaginaryPart,realPart,imaginaryPart);
	}
	else if (d>0)
	{
		r1=((-b)+sqrt(d))/(2*a);
		r2=((-b)-sqrt(d))/(2*a);
		printf("Roots are real and different: %.2f and %.2f",r1,r2);
	}
	else
	{
		r2=r1=((-b)+sqrt(d))/(2*a);
		
		printf("Roots are real and equal: %.2f and %.2f",r1,r2);
	}
	return 0;
}
