// #include <stdio.h>

// int main() {
//     int n;

//     // Input the size of the array
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     // Declare an array of size n
//     int arr[n];

//     // Input array elements
//     printf("Enter %d integers:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Calculate sum using pointers
//     int *ptr = arr; // Pointer initialized to the first element of the array
//     int sum = 0;

//     for (int i = 0; i < n; i++) {
//         sum += *ptr; // Dereferencing the pointer to access the value at the memory location it points to
//         ptr++; // Move the pointer to the next element
//     }

//     // Display the sum
//     printf("Sum of array elements: %d\n", sum);

//     return 0;
// }


#include<stdio.h>

int main()
{
    int n,sum=0;
    

    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers in the array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr = arr;
    for(int i = 0;i<n;i++ )
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("Sum = %d",sum);
}