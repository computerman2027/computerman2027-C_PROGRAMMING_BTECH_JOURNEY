#include <stdio.h>
int main()
{
	int arr[100];
    int n, i,j,temp;
    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d", &n);
    if (n < 1 || n>100)
    {
        printf("INVALID SIZE");
    }
    else
    {
        
        for (i = 0; i < n; i++)
        {
            printf("enter a number : ");
            scanf("%d", &arr[i]);
        }

        printf("DISPLAYING ARRAY CONTENTS BEFORE SORTING \n");
        for (i = 0; i < n; i++)
        {
            printf("%d\t", arr[i]);
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        printf("\nDISPLAYING ARRAY CONTENTS AFTER SORTING \n");
        for (i = 0; i < n; i++)
        {
            printf("%d\t", arr[i]);
        }

        
    }
    return 0;
}
