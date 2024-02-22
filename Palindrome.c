#include <stdio.h>
#include <conio.h>
int main()
{
    int digitno, num, rev, rem;
    printf("Enter the integer number: \n");
    scanf("%d", &digitno);
    num = digitno;
    rev = 0;
    printf("The given integer number = %d\n", num);
    while (digitno != 0)
    {
        rem = digitno % 10;
        rev = rev * 10 + rem;
        digitno = digitno / 10;
    }
    printf("The reveresed number is %d\n", rev);
    if (num == rev)
        printf("The given number %d is a palindrome \n", num);
    else
    {
        printf("The given number %d is not a palindrome \n", num);
    }
}