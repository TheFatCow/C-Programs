#include <stdio.h>

struct Student
{
    int black;
    char a[10];
}; // Don't forget the semicolon here

struct Student student;

int main()
{
    printf("Enter the details: ");
    scanf("%d %s", &student.black, student.a);
    printf("%d %s", student.black, student.a);
    return 0;
}
