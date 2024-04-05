#include<stdio.h>
float series(int );
int main()
{
    int n,nodec;
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
        printf("Sum = %.*f",nodec,series(n));
    }
    return 0;
}
// float series(int n,int term)
// {
//     if(n==0)
//     return 0;
//     return ((term+1)/((float)((term)*(term+2))))+series(n-1,term+2);
// }
float series(int n)
{
    if(n==0)
    {
        return 0;
    }
    return ((n*2)/(-0.9+(n*2.2)))+series(n-1);
}
