#include<stdio.h>
int main()
{
    int i,j,c1,c2,n1,n2;
    for(i=1;i<=10000;i++)
    {
        n1=i;
        c1=0;
        c2=0;
        for(j=1;j<n1;j++)
        {
            if(n1%j==0)
            {
                c1+=j;
            }
        }
        if(c1<n1)
        continue;//to elminate dublicate printing
        n2=c1;    
        for(j=1;j<n2;j++)
        {
            if(n2%j==0)
            {
                c2+=j;
            }
        }
        if(c1==n2 && c2==n1)
        {
            printf("(%d,%d) ",n1,n2);
        }
    }
    return 0;  
}