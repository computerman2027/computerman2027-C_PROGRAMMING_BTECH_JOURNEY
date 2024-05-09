#include<stdio.h>

int main()
{
    int row1,col1,row2,col2,i,j;
    int mat1[100][100], mat2[100][100],mat3[100][100];
    printf("enter no of rows of 1st matrix: ");
    scanf("%d",&row1);
    printf("enter no of columns of 1st matrix : ");
    scanf("%d",&col1);
    printf("enter no of rows of 2nd matrix: ");
    scanf("%d",&row2);
    printf("enter no of columns of 2nd matrix : ");
    scanf("%d",&col2);
    if(row1<1 || col1<1 || row2<1 || col2<1 || row1>100 || col1>100 || row2>100 || col2>100 )
    {
        printf("INVALID INPUT");
    }
    else if(row1==row2 && col1==col2)
    {
        printf("Enter values for 1st matrix : \n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("Enter values for 2nd matrix : \n");
        for(i=0;i<row2;i++)
        {
            for(j=0;j<col2;j++)
            {
                scanf("%d",&mat2[i][j]);
            }
        }
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                mat3[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
        printf("ANS = \n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                printf("%d\t",mat1[i][j]);
            }
            if(i==0)
            {
                printf("+\t");
            }
            else
            {
                printf(" \t");
            }
            for(j=0;j<col1;j++)
            {
                printf("%d\t",mat2[i][j]);
            }
            if(i==0)
            {
                printf("=\t");
            }
            else
            {
                printf(" \t");
            }
            for(j=0;j<col1;j++)
            {
                printf("%d\t",mat3[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("DIMENSION OF TWO MATRIX DOESNOT MATCH");
    }
    return 0;
}