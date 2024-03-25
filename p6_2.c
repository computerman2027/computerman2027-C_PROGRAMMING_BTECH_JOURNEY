#include <stdio.h>
int main()
{
    int n, i, n2, value;
    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("INVALID SIZE");
    }
    else
    {
        int arr[n];
        for (i = 0; i < n; i++)
        {
            printf("enter a number : ");
            scanf("%d", &arr[i]);
        }

        printf("DISPLAYING ARRAY CONTENTS BEFORE REPLACING \n");
        for (i = 0; i < n; i++)
        {
            printf("%d\t", arr[i]);
        }

        printf("\nenter the index position whose value need to be changed : ");
        scanf("%d", &n2);
        if (n2 >= 0 && n2 < n)
        {
            printf("enter the new value : ");
            scanf("%d", &value);
            arr[n2] = value;
            printf("DISPLAYING ARRAY CONTENTS AFTER REPLACING \n");
            for (i = 0; i < n; i++)
            {
                printf("%d\t", arr[i]);
            }
        }
        else
        {
            printf("INVALID INDEX");
        }
    }
    return 0;
}