#include<stdio.h>
#include<stdlib.h>
void insertionsort(int *arr,int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0 && arr[j]>temp;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
}
int main()
{
    int *arr,n,i;
    printf("Enter number of element : ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return -1;
    }
    printf("Enter numbers \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertionsort(arr,n);
    printf("Element in sorted order : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}