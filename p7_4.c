#include<stdio.h>
#include<string.h>
int main()
{
    char str[200],search[100];
    int l,l2,i,j;
    printf("Enter a sentence : ");
    fgets(str,200,stdin);
    l=strlen(str);
    if (str[l - 1] == '\n')
    str[l - 1] = '\0';
    l=strlen(str);
    printf("Enter the text that need to be searched : ");
    fgets(search,100,stdin);
    l2=strlen(search);
    if (search[l2 - 1] == '\n')
    search[l2 - 1] = '\0';
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
            printf("the given pattern of characters is found at index no %d",i);
            return 0;
        }
    }
    printf("the given pattern of characters is not found");
    return 0;
}