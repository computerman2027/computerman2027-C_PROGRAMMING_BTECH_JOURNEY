#include<stdio.h>
int main()
{
    int num,revnum=0,copynum;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    copynum=num;
    while(copynum>0)
    {
        revnum=revnum*10+(copynum%10);
        copynum/=10;
    }
    printf("The given number %d is %s number",num,(num==revnum)?"Palindrome":"not Palindrome");
    return 0;
}