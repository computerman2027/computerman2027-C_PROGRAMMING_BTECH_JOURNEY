#include<stdio.h>
int main()
{
	int limit,a=0,b=1,c,i;
	printf("ENTER LIMIT : ");
	scanf("%d",&limit);
	printf("Non-Fibonacci numbers up to %d are:\n",limit);
	for(i=1;i<=limit;)
	{
		c=a+b;
		a=b;
		b=c;
		while(i<c && i<=limit)
		{
			printf("%d ",i);
			i++;
		}
		i++;
	}
	return 0;
}
