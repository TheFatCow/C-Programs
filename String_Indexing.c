#include<stdio.h>
int main()
{
    char arr[50]={"Visvesaraya Technological University"};
    for (int i = 0; i < 50; i++)
    {
        if(arr[i]=='U'||arr[i]=='u')
        {
            printf("Letter %c found at %d ",arr[i],i); 
        }
    }
}