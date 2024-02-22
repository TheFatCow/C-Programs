#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    printf("Enter the size of string \n");
    scanf("%d", &n);
    char string[n];
    printf("Enter the string \n");
    while(getchar() != '\n');
    fgets(string,sizeof(string),stdin);
    for(int i = 0; i < n; i++)
    {
        if(string[i] == 'u' || string[i] == 'U')
        {
            string[i] = 'a';
        }
    }
    printf("Modified String  : %s",string);
}