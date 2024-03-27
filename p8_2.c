#include<stdio.h>
#include<string.h>
void toup(char *str);
void tolow(char *str);
int main()
{
    int l;
    char str1[100],str2[100],str3[100];
    printf("enter a string : ");
    fgets(str1,100,stdin);
    l=strlen(str1);
    if(str1[l-1]=='\n')
    str1[l-1]='\0';
    strcpy(str2,str1);
    strcpy(str3,str1);
    toup(str2);
    tolow(str3);
    printf("the upper case string : %s\n",str2);
    printf("the lower case string : %s\n",str3);
    return 0;

}
void toup(char *str)
{
    int l = strlen(str);
    int i;
    char ch;
    for(i=0;i<l;i++)
    {
        ch=str[i];
        
        if(ch>='a' && ch<='z')
        {
            ch-=32;
            str[i]=ch;
        }
    }
}
void tolow(char *str)
{
    int l = strlen(str);
    int i;
    char ch;
    for(i=0;i<l;i++)
    {
        ch=str[i];
        //printf("character = %s",ch);
        if(ch>='A' && ch<='Z')
        {
            ch+=32;
            str[i]=ch;
        }
    }
}