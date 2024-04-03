#include<stdio.h>
int main()
{
	float dino =1.3;
	float sum =0;
	int n,i,nodec;
	printf("enter number of terms : ");
	scanf("%d",&n);
	printf("Enter upto how many decimal the result need to be shown : ");
	scanf("%d",&nodec);
	if(n<1 || nodec<0)
	{
		printf("INVALID INPUT");
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		sum = sum+((i*2)/dino);
		dino=dino+2.2;
	}
	printf("sum of the series upto %d terms is = %.*f",n,nodec,sum);
	return 0;
	
}
