#include<stdio.h>
int main()
{
	int choice,a,b,c;
	float d;
	printf("Menu\n");
	printf("1. sum\n");
	printf("2. difference\n");
	printf("3. product\n");
	printf("4. quotient\n");
	printf("ENTER YOUR CHOICE\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter first number ");
    		scanf("%d",&a);
    		printf("Enter second number ");
    		scanf("%d",&b);
			c=a+b;
    		printf("Sum = %d\n",c);
			break;
		case 2:
			printf("Enter first number ");
    		scanf("%d",&a);
    		printf("Enter second number ");
    		scanf("%d",&b);
			c=a-b;
    		printf("Difference = %d\n",c);
			break;
		case 3:
			printf("Enter first number ");
    		scanf("%d",&a);
    		printf("Enter second number ");
    		scanf("%d",&b);
			c=a*b;
    		printf("Product = %d\n",c);
			break;
		case 4:
			printf("Enter first number ");
    		scanf("%d",&a);
    		printf("Enter second number ");
    		scanf("%d",&b);
			d=((float)a)/b;
    		printf("Quotient = %f\n",d);
			break;
		default:
			printf("WRONG INPUT");
			break;
	}
}
