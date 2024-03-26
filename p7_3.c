#include <stdio.h>
#include <string.h>

int main()
{
    int i, l;
    char str[100], newstr[100];
    printf("ENTER A STRING : ");
    // scanf("%s",str);
    fgets(str, 100, stdin);
    l = strlen(str);
    if (str[l - 1] == '\n')
        str[l - 1] = '\0';
    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        newstr[i] = str[l - 1 - i];
    }
    newstr[i] = '\0';
    // printf("str = %s & newstr = %s \n",str,newstr);
    if (strcmp(str, newstr) == 0)
    {
        printf("PALINDROME TEXT");
    }
    else
    {
        printf("NOT PALINDROME TEXT");
    }
    return 0;
}