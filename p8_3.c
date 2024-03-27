#include<stdio.h>
int findPower(int base, int power);

int main()
{
    int base,power;
    printf("enter base : ");
    scanf("%d",&base);
    printf("enter power : ");
    scanf("%d",&power);
    printf("ANS = %d",findPower(base,power));
    return 0;
}
int findPower(int base, int power)
{
    int ans=1,i;
    for(i=1;i<=power;i++)
    {
        ans*=base;
    }
    return ans;
}