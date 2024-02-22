
// #include <stdio.h>
// #include <ctype.h>
// #include <conio.h>
// int main()
// {
//     char Name[20];
//     int i=0;
//     char ch;
//     printf("Enter your name\n");
//     gets(Name);
//     // scanf("%s",&Name); //&Name works
//     printf("\n Your name is %s", Name);
//     while(Name[i])
//     {
//         ch = Name[i];
//         putchar(toupper(ch));
//         i++;
//     }
// }

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    char Name[20];
    printf("Enter Your name \n");
    gets(Name);

    for (i = 0; Name[i] != '\0'; i++)
    {
        if (Name[i] >= 'a' && Name[i] <= 'z')
        {
            Name[i] = Name[i] - 32;
            j = 0;
        }
        else if (Name[i] >= 'A' && Name[i] <= 'Z')
        {
            Name[i] = Name[i] + 32;
        }
    }
    if (j = 0)
        printf("\nYour name in Upper case is %s", Name);
    else
        printf("\nYour name in Lower case is %s", Name);

    return 0;
}
