#include <stdio.h>
#include <string.h>

// Function to extract name from email ID
void extractNameFromEmail(char email[], char name[]) { //Function definition

    // Copy the name part of the email to the 'name' array

    sscanf(email, "%[^@]", name);


}

int main() 
{
    char email[100];
    char name[100];

    // Input email ID
    printf("Enter your email ID: ");
    fgets(email, sizeof(email), stdin);

    //printf("\n Size of emial is %d :",sizeof(email));

    // Remove newline character if present
    size_t len = strlen(email);
    printf("\n len =%zu", len);
    if (len > 0 && email[len - 1] == '\n') {
        email[len - 1] = '\0';
    }

    // Extract and print the name
    extractNameFromEmail(email, name);  //Function calling
    printf("\n Extracted name: %s\n", name);

    return 0;
}
