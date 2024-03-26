#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("Enter number of data : ");
    scanf("%d",&n);
    if(n>0)
    {
        float arr[n],mean,sum=0,s1=0,sd=0;
        printf("enter values of dataset : \n");
        for(i=0;i<n;i++)
        {
            scanf("%f",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            sum = sum+arr[i];
        }
        mean=sum/n;
        for(i=0;i<n;i++)
        {
            s1=s1+pow((arr[i]-mean),2);
        }
        s1/=(n-1);
        sd=sqrt(s1);
        printf("Mean = %.2f and Standard Deviation = %.2f",mean,sd);
    }
    else
    {
        printf("INVALID INPUT");
    }
}