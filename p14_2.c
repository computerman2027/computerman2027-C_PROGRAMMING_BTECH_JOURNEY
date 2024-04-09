#include<stdio.h>
#include<stdlib.h>
void insertionsort(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
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
    FILE *fptr,*fptr2;
    int count=0,d,i;
    int *arr;
    fptr=fopen("input.txt","r");
    if(fptr==NULL)
    {
        printf("ERROR OPENING FILE");
        return 0;
    }
    while(fscanf(fptr,"%d",&d)==1)
    {
        count++;
    }
    rewind(fptr);
    arr=(int *)malloc(count*sizeof(int));
    i=0;
    while(fscanf(fptr,"%d",&arr[i])==1)
    {
        i++;
    }
    fclose(fptr);
    insertionsort(arr,count);
    fptr2=fopen("output.txt","w");
    for(i=0;i<count;i++)
    {
        fprintf(fptr2,"%d ",arr[i]);
    }
    fclose(fptr2);
}