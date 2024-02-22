// #include<stdio.h>

// int main() {
//     int n, l, r, mid, x;

//     printf("Enter the size of the array : \n");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter the elements of the array in ascending order : \n");
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     l = 0;
//     r = n - 1;

//     printf("Enter the value to be searched in the array : \n");
//     scanf("%d", &x);

//     while (l <= r) {
//         mid = l + (r - l) / 2;

//         if (x == arr[mid]) {
//             printf("Element found at index %d : %d\n", mid, arr[mid]);
//             return 0;
//         } else if (x < arr[mid]) {
//             r = mid - 1;
//         } else {
//             l = mid + 1;
//         }
//     }

//     printf("Element not found in the array.\n");
//     return -1;
// }

#include <stdio.h>

int main() {
    int n, temp, l, r, x;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - 1); j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Binary search
    printf("Enter the number to be searched: ");
    scanf("%d", &x);

    l = 0;
    r = n - 1;
    while (l <= r) {
        temp = l + (r - l) / 2;

        if (x == arr[temp]) {
            printf("Number %d found at index %d\n", x, temp);
            return 0;
        } else if (x < arr[temp]) {
            r = temp - 1;
        } else {
            l = temp + 1;
        }
    }

    printf("Number not found\n");
    return -1;
}
