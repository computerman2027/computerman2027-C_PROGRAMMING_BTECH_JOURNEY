#include<stdio.h>

int main()
{
	int arr[100];
    int n,i;
    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d",&n);
    if(n<1 || n>100)
    {
        printf("INVALID SIZE");
    }
    else
    {
        
        for(i=0;i<n;i++)
        {
            printf("enter a number : ");
            scanf("%d",&arr[i]);
        }

        printf("DISPLAYING ARRAY CONTENTS \n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}
