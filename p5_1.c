#include<stdio.h>
int main()
{
    int height,i,j,sp,c=1;
    printf("enter height : ");
    scanf("%d",&height);
    if(height<=0)
    {
        printf("INVALID INPUT");
    }
    else
    {
        printf("PATTERN 1 : \n");
        for(i=1;i<=height;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }

        printf("PATTERN 2 : \n");
        for(i=1;i<=height;i++)
        {
            for(sp=1;sp<=height-i;sp++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            for(j=1;j<i;j++)
            {
                printf("*");
            }
            printf("\n");
        }

        printf("PATTERN 3 : \n");
        for(i=1;i<=height;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",c);
                c++;
            }
            printf("\n");
        }
    }
    return 0;
}