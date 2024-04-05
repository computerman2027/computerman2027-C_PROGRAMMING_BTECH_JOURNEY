#include <stdio.h>
#include <string.h>

struct student
{
    char name[100], address[500];
    int roll;
};
void sort(struct student arr[],int n);
int main()
{
    struct student stu[100];
    char name[100], address[500];
    int n, i, l;
    printf("ENTER NO OF STUDENT : ");
    scanf("%d", &n);
    getchar();
    if (n < 1 || n > 100)
    {
        printf("INVALID INPUT");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter name : ");
        fgets(stu[i].name, 100, stdin);
        l = strlen(stu[i].name);
        if (l > 0)
        {
            if (stu[i].name[l - 1] == '\n')
                stu[i].name[l - 1] = '\0';
        }
        //strcpy(stu[i].name,name);
        printf("Enter roll no : ");
        scanf("%d", &stu[i].roll);
        getchar();
        printf("Enter address : ");
        fgets(stu[i].address, 500, stdin);
        l = strlen(stu[i].address);
        if (l > 0)
        {
            if (stu[i].address[l - 1] == '\n')
                stu[i].address[l - 1] = '\0';
        }
        //strcpy(stu[i].address,address);
    }
    sort(stu,n);
    printf("STUDENT DETAILS : \n");
    for(i=0;i<n;i++)
    {
        printf("Name : %s \n Roll : %d \n Address : %s\n",stu[i].name,stu[i].roll,stu[i].address);
    }

    return 0;
}
void sort(struct student arr[],int n)
{
    struct student temp;
    int i,j;
    for(i=0;i<n;i++)
    {  
        temp=arr[i];
        for(j=i-1;j>=0 && arr[j].roll>temp.roll;j--)
        {
            arr[j+1]=arr[j];
        } 
        arr[j+1]=temp;
    }
}