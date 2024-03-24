#include<stdio.h>
int main()
{
    int a=1,b=0,c,n;
    printf("ENTER NUMBER OF TERMS : ");
    scanf("%d",&n);
    if(n<1)
    {
        printf("INVALID INPUT");
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            c=a+b;
            if(i==n)
            {
                printf("%d",c);        
            }
            else
            {
                printf("%d, ",c);
                a=b;
                b=c;
            }
        
        }
    }
    return 0;
}