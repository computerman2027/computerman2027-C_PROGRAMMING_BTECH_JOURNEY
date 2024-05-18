#include <stdio.h>
#include <string.h>
struct product
{
    int modelno;
    char name[100];
};
void input(struct product *p)
{
    printf("enter product model no :");
    scanf("%d", &p->modelno);
    getchar();
    printf("enter product name :");
    fgets(p->name, 100, stdin);
    int l = strlen(p->name);
    if ((*p).name[l - 1] == '\n')
        (*p).name[l - 1] = '\0';
}
void output(struct product *p)
{
    printf("Model no = %d \nproduct name = %s",p->modelno,p->name);
}
int main()
{
    struct product p1;
    input(&p1);
    output(&p1);
    return 0;
}