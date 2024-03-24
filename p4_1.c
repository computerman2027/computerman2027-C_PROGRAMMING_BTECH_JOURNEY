#include<stdio.h>
int main()
{
    int a,d,n,term;
    printf("ENTER FIRST TERM OF THE SERIES : ");
    scanf("%d",&a);
    printf("ENTER COMMON DIFFERENCE OF THE SERIES : ");
    scanf("%d",&d);
    printf("ENTER NUMBER OF TERMS OF THE SERIES : ");
    scanf("%d",&n);
    if(n<1)
    {
        printf("INVALID INPUT");
    }
    else
    {
        printf("THE A.P SERIES IS \n");
        term=a;
        for(int i=1;i<n;i++)
        {
            printf("%d, ",term);
            term+=d;
        }
        printf("%d",term);
    }
    return 0;
}