#include<stdio.h>
#include<string.h>
int main()
{
    char str[200],search[100];
    int l,l2,i,j,c=0;
    printf("Enter a sentence : ");
    scanf("%[^\n]",str);
    l=strlen(str);
    fflush(stdin);
    printf("Enter the text that need to be searched : ");
    scanf("%[^\n]",search);
    l2=strlen(search);
    for(i=0;i<l-l2+1;i++)
    {
        for(j=0;j<l2;j++)
        {
            if(str[j+i]!=search[j])
            {
                break;
            }
        }
        if(j==l2)
        {
            c++;
            printf("the given pattern of characters is found at index no %d\n",i);
        }
    }
    if(c==0)
    printf("the given pattern of characters is not found\n");
    return 0;
}