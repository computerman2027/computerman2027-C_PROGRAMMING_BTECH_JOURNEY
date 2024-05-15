#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
    if(*str)
    {
        reverse(str+1);
        putchar(*str);
    }
}
int main()
{
    char str[100];
    int l;
    printf("ENTER TEXT : ");
    fgets(str, 100, stdin);
    l = strlen(str);
    if (l > 0)
    {
        if (str[l - 1] == '\n')
            str[l - 1] = '\0';

        printf("THE REVERSE TEXT : ");
        reverse(str);
    }
    else
    {
        printf("INVALID INPUT");
    }
    return 0;
}