#include<stdio.h>
int main()
{
    FILE *fptr;
    int i,n,d;
    fptr=fopen("input.txt","w");
    printf("Enter number of integers : ");
    scanf("%d",&n);
    if(n<1)
    {
        printf("INVALID INPUT");
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        printf("Enter a number : ");
        scanf("%d",&d);
        fprintf(fptr,"%d ",d);
    }
    return 0;
}