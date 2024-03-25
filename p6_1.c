#include<stdio.h>

int main()
{
    int n,i;
    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d",&n);
    if(n<1)
    {
        printf("INVALID SIZE");
    }
    else
    {
        int arr[n];
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