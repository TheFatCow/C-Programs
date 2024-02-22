#include <stdio.h>
int main()
{
    int mtx1[3][3], mtx2[3][4], res[3][3], i, j, k, m, n, p, q, row, col;
    printf("Enter the order of the first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the order of the second matrix\n");
    scanf("%d%d", &p, &q);
    if (n != p)
    {
        printf("Matrix Multiplication not possible\n");
        exit(0);
    }
    else
    {
        printf("Enter the elements of the first matrix\n");
        for (row = 0; row < m; row++)
        {
            for (col = 0; col < n; col++)
            {
                scanf("%d", &mtx1[row][col]);
            }
        }
        printf("Enter the elements of the second matrix\n");
        for (row = 0; row < p; row++)
        {
            for (col = 0; col < q; col++)
            {
                scanf("%d", &mtx2[row][col]);
            }
        }
        for (row = 0; row < m; row++)
        {
            for (col = 0; col < q; col++)
            {
                res[row][col] = 0;
                for (k = 0; k < n; k++)
                {
                    res[row][col] = res[row][col] + mtx1[row][k] * mtx2[k][col];
                }
            }
        }
        //clrscr();
        printf("Elements of first matrix is\n ");
        for (row = 0; row < m; row++)
        {
            for (col = 0; col < n; col++)
            {
                printf("%3d", mtx1[row][col]);
            }
            printf("\n");
        }
        printf("Elements of second matrix is\n ");
        for (row = 0; row < p; row++)
        {
            for (col = 0; col < q; col++)
            {
                printf("%3d", mtx1[row][col]);
            }
            printf("\n");
        }
        printf("The product of first and second matrix is \n");
        for (row = 0; row < m; row++)
        {
            for (col = 0; col < q; col++)
            {
                printf("%3d", res[row][col]);
            }
            printf("\n");
        }
    }
}
