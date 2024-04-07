#include<stdio.h>
#include<stdlib.h>
void bubblesort(int *ptr,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n,i;
    printf("enter number of array elements : ");
    scanf("%d",&n);
    if(n<1)
    {
        printf("INVALID INPUT");
        return 0;
    }
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    printf("enter %d numbers : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printf("Displaying array after sorting : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}