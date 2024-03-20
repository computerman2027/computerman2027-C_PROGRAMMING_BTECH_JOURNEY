#include<stdio.h>
#include<math.h>
int main()
{
	float num1,num2;
	printf("ENter two numbers: ");
	scanf("%f%f",&num1,&num2);
	if(fabs(num1)>fabs(num2))
	{
		printf("Magnitude of %f is greater than %f \n",num1,num2);
	}
	else if(fabs(num1)<fabs(num2))
	{
			printf("Magnitude of %f is less than %f \n",num1,num2);
	}	
	else
	printf("Both numbers have equal magnitude\n");
	return 0;
}
