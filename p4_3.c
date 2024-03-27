#include<stdio.h>
#include<math.h>
int main()
{
    int num,i;
    printf("ENTER A POSITIVE NUMBER : ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("INVALID INPUT");
    }
    else if(num==0 || num==1)
    {
        printf("neither prime nor composite");
    }
    else
    {
        for(i=2;i<=(int)sqrt(num);i++)
        {
            if(num%i==0)
            {
                printf("%d is a composite number",num);
                return 0;
            }
        }
        printf("%d is a prime number",num);
	}
    return 0;
}
