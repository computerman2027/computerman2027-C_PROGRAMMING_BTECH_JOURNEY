#include<stdio.h>
int main()
{
	int h,i,j,c=1,sp;
	printf("enter no of lines : ");
	scanf("%d",&h);
	if(h>0)
	{
		printf("PATTERN : \n");
		for(i=1;i<=h;i++)
		{
			for(sp=1;sp<=h-i;sp++)
			{
				printf(" ");
			}
			for(j=1;j<=(i*2)-1;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		
	}
	else
		printf("INVALID INPUT");

	return 0;
}
