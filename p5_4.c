#include<stdio.h>
#include<math.h>
int main()
{
    int limit,i,j,fl;
    printf("enter upper limit : ");
    scanf("%d",&limit);
    if(limit<0)
    {
        printf("INVALID INPUT");
    }
    else
    {
        int c=0;
        for(i=1;i<=limit;i++)
        {
            fl=0;
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    fl=1;
                    break;
                }
            }
            if(fl==0 && i!=1)
            {
                if(c==0)
                {
                    printf("THE PRIME NUMBERS ARE :\n");
                    printf("%d",i);
                    c++;
                }
                else 
                {
                    printf(", %d",i);
                }
            }

        }
        if(c==0)
        {
            printf("THERE IS NO PRIME NUMBERS IN THIS RANGE");
        }
    }
    return 0;
}