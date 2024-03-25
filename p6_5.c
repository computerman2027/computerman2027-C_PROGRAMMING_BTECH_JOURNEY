#include <stdio.h>
int main()
{
    int n, i,j,temp,pos;
    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("INVALID SIZE");
    }
    else
    {
        int arr[n];
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
            temp=arr[i];
            pos=i;
            for(j=i+1;j<n;j++)
            {
                if(arr[j]<temp)
                {
                    temp=arr[j];
                    pos=j;
                }
            }
            arr[pos]=arr[i];
            arr[i]=temp;
        }
        printf("\nDISPLAYING ARRAY CONTENTS AFTER SORTING \n");
        for (i = 0; i < n; i++)
        {
            printf("%d\t", arr[i]);
        }

        
    }
    return 0;
}