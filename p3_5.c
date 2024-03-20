#include<stdio.h>
int main()
{
	int rank;
	char grade;
	printf("Enter Rank : ");
	scanf("%d",&rank);
	if(rank==1)
	grade='A';
	else if(rank == 2)
	grade='B';
	else if(rank==3)
	grade='C';
	else if(rank==4)
	grade='D';
	else if (rank ==5)
	grade='E';
	else
	{
		printf("INVALID INPUT");
		return 0;
	}
	printf("GRADE = %c",grade);
	return 0;
}
