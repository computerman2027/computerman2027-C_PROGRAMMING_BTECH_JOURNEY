#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
    int roll;
    char name[100];
    char address[500];
};

void writefile(char *filename,struct student *stds,int n)
{
    FILE *fptr=fopen(filename,"wb");
    if(fptr==NULL)
    {
        printf("Error in opening file\n");
        return;
    }
    fwrite(stds,sizeof(struct student),n,fptr);
    fclose(fptr);
}
int findstudent(char *filename,int roll, struct student *std)
{
    FILE *fptr=fopen(filename,"rb");
    if(fptr==NULL)
    {
        printf("Error in opening file\n");
        return 1;
    }
    while(fread(std,sizeof(struct student),1,fptr))
    {
        if(std->roll==roll)
        {
            fclose(fptr);
            return 1;
        }
    }
    fclose(fptr);
    return 0;

}
int main()
{
    int n,i,l1,l2,r1;
    printf("Enter number of students : ");
    scanf("%d",&n);
    getchar();
    if(n<1)
    {
        printf("INVALID INPUT");
        return 0;
    }
    struct student st[n];
    for(i=0;i<n;i++)
    {
        printf("Enter student details :\n");
        printf("Enter roll no :");
        scanf("%d",&st[i].roll);
        getchar();
        printf("Enter Name :");
        fgets(st[i].name,100,stdin);
        l1=strlen(st[i].name);
        if(st[i].name[l1-1]=='\n')
        st[i].name[l1-1]='\0';
        printf("Enter Address : ");
        fgets(st[i].address,500,stdin);
        l2=strlen(st[i].address);
        if(st[i].address[l2-1]=='\n')
        st[i].address[l2-1]='\0';
    }
    writefile("student.dat",st,n);

    printf("Enter roll to be searched : ");
    scanf("%d",&r1);
    struct student st2;
    int success=findstudent("student.dat",r1,&st2);
    if(success==0)
    {
        printf("roll no not found");
    }
    else
    {
        printf("Name = %s\nRoll = %d\nAddress = %s",st2.name,st2.roll,st2.address);
    }
}