#include<stdio.h>
#include<math.h>
int main()
{
    int n,nodec;
    float sum=0;
    printf("enter number of terms : ");
    scanf("%d",&n);
    printf("enter upto how much decimal place the answer need to be shown : ");
    scanf("%d",&nodec);
    if(n<1 || nodec<0)
    {
        printf("INVALID INPUT");
    }
    else
    {
        int i=1,j=1;
        while(i<=n)
        {
            sum=sum+((j+1)/((float)((j)*(j+2))));
            i++;
            j+=2;
        }
        printf("Sum = %.*f",nodec,sum);
    }
    return 0;
}