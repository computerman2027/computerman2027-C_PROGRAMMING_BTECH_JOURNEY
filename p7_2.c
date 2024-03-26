#include<stdio.h>

int main()
{
    int row1,col1,row2,col2,i,j;
    printf("enter no of rows of 1st matrix: ");
    scanf("%d",&row1);
    printf("enter no of columns of 1st matrix : ");
    scanf("%d",&col1);
    printf("enter no of rows of 2nd matrix: ");
    scanf("%d",&row2);
    printf("enter no of columns of 2nd matrix : ");
    scanf("%d",&col2);
    if(row1<1 || col1<1 || row2<1 || col2<1)
    {
        printf("INVALID INPUT");
    }
    else if(col1 == row2)
    {
        int mat1[row1][col1], mat2[row2][col2],mat3[row1][col2];
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
        int row4=0,col4=0,i2,s;
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {   
                s=0;
                for(i2=0;i2<col1;i2++)
                {
                    s=s+(mat1[row4][i2]*mat2[i2][col4]);
                }
                col4++;
                mat3[i][j]=s;
            }
            row4++;
            col4=0;
        }
        printf("1st Matrix = \n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                printf("%d\t",mat1[i][j]);
            }
            printf("\n");
        }
        printf("2nd Matrix = \n");
        for(i=0;i<row2;i++)
        {
            for(j=0;j<col2;j++)
            {
                printf("%d\t",mat2[i][j]);
            }
            printf("\n");
        }
        printf("Multiplied Matrix = \n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
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