// #include <stdio.h>

// int main()
// {
//     char something[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
//     char buffer[100];
//     FILE *f;

//     // Check if the file is opened successfully
//     if ((f = fopen("Hello.txt", "a+")) == NULL) {
//         perror("Error opening file");
//         return 1; // Return an error code
//     }

//     // Write something to the file
//     fwrite(something, sizeof(char), 10, f);
//     fclose(f);

//     // Open the file again for reading
//     if ((f = fopen("Hello.txt", "r")) == NULL) {
//         perror("Error opening file");
//         return 1; // Return an error code
//     }

//     // Read the first line from the file
//     if (fgets(buffer, sizeof(buffer), f) != NULL) {
//         printf("First line in Hello.txt: %s", buffer);
//     } else {
//         perror("Error reading file");
//     }

//     fclose(f);
//     return 0;
// }

#include<stdio.h>  
void main( )  
{  
FILE *fp ;  
char ch ;  
fp = fopen("File_Handeling.c","r+") ;  
while ( 1 )  
{  
ch = fgetc ( fp ) ;  
if ( ch == EOF )  
break ;  
printf("%c",ch) ;  
}  
fputs("Hello",fp);
fclose (fp ) ;  


   printf("File :%s\n", __FILE__ );    
   printf("Date :%s\n", __DATE__ );    
   printf("Time :%s\n", __TIME__ );    
   printf("Line :%d\n", __LINE__ ); 

   
}  