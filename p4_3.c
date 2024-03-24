#include<stdio.h>
#include<math.h>
int main()
{
    int num,c=0;
    printf("ENTER NUMBER : ");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("INVALID INPUT");
    }
    else if(num==1)
    {
        printf("neither prime nor composite");
    }
    else
    {
        for(int i=2;i<(int)sqrt(num);i++)
        {
            if(num%i==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d is a prime number",num);
        }
        else
        {
            printf("%d is a composite number",num);
        }
    }
    return 0;
}