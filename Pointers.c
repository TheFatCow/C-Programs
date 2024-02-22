//WAP a program to add two numbers using pointers and functions.
// #include<stdio.h>
// void sum( int *a,int *b,int *t);
// int main()
// {
//     int num1,num2,total;
//     printf("Enter the 1st number: \n");
//     scanf("%d",&num1);
//     printf("Enter the 2nd number: \n");
//     scanf("%d",&num2);

//     sum( &num1, &num2, &total );
//     printf("The sum is %d",total);
//     return 0;
// }

// void sum( int *a,int *b,int *t)
// {
//     *t=*a+*b;
// } 

// WAP a program to find the area of a triangle using pointers and functions.
#include <stdio.h>
void area( int *b,int *h,float *ar);
int main()
{
    int base,height;
    float Area;
    printf("Enter the base of the triangle : \n");
    scanf("%d",&base);
    printf("Enter the height of the triangle: \n");
    scanf("%d",&height);

    area(&base,&height,&Area);
    printf("The area of the triangle is %f : ",Area);

}

void area( int *b,int *h,float *ar)
{
    *ar=0.5*(*b)*(*h);
}
