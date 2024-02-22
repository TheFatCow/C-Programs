#include<stdio.h>
int main()
{   
    int m,n,index;
    printf("Enter the size of first array:\n  ");
    scanf("%d",&m);
    printf("Enter the size of second array:\n  ");
    scanf("%d",&n);
    int array1[m],array2[n],array3[m+n];

    printf("Enter the %d values in the first array: \n",m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Enter the %d values in the second array: \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array2[i]);
    }
    index = 0;
    for(int i=0;i<m;i++)
    {
        array3[index] = array1[i];
        index++;

    }
    for(int i=0;i<n;i++)
    {
        array3[index] = array2[i];
        index++;

    }

    printf("The new array is : \n");
    for(int i=0;i<m+n;i++)
    {
        printf("array[%d] = %d \n",i,array3[i]);
    }
}