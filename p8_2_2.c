#include <stdio.h>
#include <ctype.h>
char customToUpper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch - 'a' + 'A';
    else
        return ch;
}
char customToLower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch - 'A' + 'a';
    else
        return ch;
}
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isalpha(ch) != 0)
    {
        printf("Uppercase version: %c\n", customToUpper(ch));
        printf("Lowercase version: %c\n", customToLower(ch));
    }
    else
    {
        printf("INVALID INPUT");
    }
    return 0;
}