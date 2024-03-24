#include<stdio.h>
int main()
{
    int uplimit,a,b,c,i;
    printf("ENTER UPPER LIMIT : ");
    scanf("%d",&uplimit);
    if(uplimit<0)
    {
        printf("INVALID INPUT");
    }
    else
    {
        a=1;
        b=0;
        c=a+b;
        while(c<uplimit)
        {
            for(i=b+1;i<c;i++)
            {
                printf("%d ",i);
            }
            a=b;
            b=c;
            c=a+b;
        }
        for(i=b+1;i<=uplimit;i++)
        {
            printf("%d ",i);
        }
    }
    return 0;
}