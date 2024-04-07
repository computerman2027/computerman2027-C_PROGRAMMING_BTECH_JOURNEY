#include<stdio.h>
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
    int arr[100],n,i;
    printf("Enter number of element : ");
    scanf("%d",&n);
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
    return 0;
}