#include<stdio.h>
int main()
{
	int year;
	printf("ENTER A YEAR : ");
	scanf("%d",&year);
	if(year<0)
	{
		printf("INVALID INPUT");
	}
	else if((year%400 == 0 )||(year%100!=0 && year%4==0))
	{
		printf("GIVEN YEAR IS LEAP YEAR");
	}
	else
	{
		printf("GIVEN YEAR IS NOT LEAP YEAR");
	}
	return 0;
}
