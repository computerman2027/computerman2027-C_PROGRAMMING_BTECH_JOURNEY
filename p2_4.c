#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER FIRST NUMBER (a)= ");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER (b)= ");
    scanf("%d",&b);
    printf("ENTER THIRD NUMBER (c)= ");
    scanf("%d",&c);
    printf("Relational operator \n");
    printf("a > b = %d \n",a>b);
    printf("a < b = %d \n",a<b);
    printf("a == b = %d \n",a==b);
    printf("a != b = %d \n",a!=b);
    printf("Assignment operator \n");
    printf("a *= b = %d \n",a*=b);
    printf("a /= b = %d \n",a/=b);
    printf("a += b = %d \n",a+=b);
    printf("a -= b = %d \n",a-=b);
    printf("Logical operator \n");
    printf("a>b && a>c = %d \n",a>b && a>c);
    printf("a>b || a>c = %d \n",a>b || a>c);
    printf("!(a>b && a>c) = %d \n",!(a>b && a>c));
    printf("Bitwise operator \n");
    printf("a & b = %d \n",a&b);
    printf("a | b = %d \n",a|b);
    printf("~a = %d \n",~a);
    printf("a ^ b = %d \n",a^b);
    printf("a << b = %d \n",a<<b);
    printf("a >> b = %d \n",a>>b);
    return 0;
}