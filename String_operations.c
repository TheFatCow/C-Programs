#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    int ch,len1,len2;;
    char s1[30],s2[30],s3[60];
    printf("\n Press 1 for comparision\n 2 to concatinate\n 3 to get length of strings\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Enter first string \n");
        scanf("%s",s1);
        printf("Enter second string \n");
        scanf("%s",s2);
        if(strcmp(s1,s2)<0) 
        printf("%s is smaller than %s",s1,s2); 
        else if(strcmp(s1,s2)==0) 
        printf("%s is equal to %s",s1,s2);
        else 
        printf("%s is not equal to %s",s1,s2);
        break;
    
    case 2:
        printf("Enter first string \n");
        scanf("%s",s1);
        printf("Enter second string \n");
        scanf("%s",s2);
        printf("%s%s",s1,s2);
        printf(s3);
        break;
    
    case 3:
        printf("Enter first string \n");
        scanf("%s",s1);
        printf("Enter second string \n");
        scanf("%s",s2);
        len1=strlen(s1);
        len2=strlen(s2);
        printf("Length of %s is %d",s1,len1);
        printf("Length of %s is %d",s2,len2);
        break;

    default:printf("\nWrong input, try again! ");
        break;
    }
    return 0;

    
}