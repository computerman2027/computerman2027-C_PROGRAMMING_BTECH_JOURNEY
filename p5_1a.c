#include<stdio.h>
int main()
{
	int h,i,j;
	printf("enter no of lines : ");
	scanf("%d",&h);
	if(h>0)
	{
		printf("PATTERN : \n");
		for(i=1;i<=h;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d",j);
			}
			printf("\n");
		}
	}
	else
	{
		printf("INVALID INPUT");
	}
	return 0;
}
