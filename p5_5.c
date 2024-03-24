#include<stdio.h>
#include<math.h>
int main()
{
    int i,copy,c,sum,d;
    for(i=100;i<=1000;i++)
    {
        copy=i;
        c=0;
        while(copy>0)
        {
            c++;
            copy/=10;
        }
        copy=i;
        sum=0;
        while(copy>0)
        {
            d=copy%10;
            sum = sum+((int)pow(d,c));
            copy/=10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}