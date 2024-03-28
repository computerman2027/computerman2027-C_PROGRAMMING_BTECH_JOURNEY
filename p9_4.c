#include <stdio.h>
#include <string.h>
void reverse(char *str, int i);
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
        reverse(str, 0);
    }
    else
    {
        printf("INVALID INPUT");
    }
    return 0;
}
void reverse(char *str, int i)
{
    if (i == strlen(str) - 1)
    {
        printf("%c", str[i]);
        return;
    }
    reverse(str, i + 1);
    printf("%c", str[i]);
    return;
}