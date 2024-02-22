// WAP to display matrix addition
#include <stdio.h>
int main()
{
    int n, m, a, b, p, q;

    printf("Enter the order of first matrix \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Enter the order of second matrix\n");
    scanf("%d", &m);
    scanf("%d", &n);

    if (a == m && b == n)
    {
        int arr1[a][b];
        int arr2[m][n];
        p = a;
        q = b;
        int res[p][q];
        printf("Enter the values of first matrix\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("Enter the values of second matrix\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }

        printf("Result after addition\n");
        // for(int i = 0; i <a; i++)
        // {
        //     printf("[ ");
        //     for(int j = 0; j < n; j++)
        //     {
        //         printf("%d",arr1[a][b]);
        //     }
        //     printf("]\n");

        // }
        for (int i = 0; i < a; i++)
        {
            printf("[ ");
            for (int j = 0; j < b; j++)
            {
                res[i][j] = arr1[i][j] + arr2[i][j];
                printf(" %d ", res[i][j]);
            }
            printf("]\n");
        }
    }

    else
    {
        printf("Order of both the matrix does not match");
    }
}