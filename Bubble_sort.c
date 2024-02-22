#include <stdio.h>
int main()
{
    int i, j, n, temp;
    
    printf("Enter the number of numbers to enter into the array\t");
    scanf("%d", &n);
    int arr[n];
    printf("\n Enter %d numbers", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <(n-1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}