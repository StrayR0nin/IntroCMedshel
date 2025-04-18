#include <stdio.h> 
#include <ctype.h> 

int main() {

    char message[500];
    int shift;
    char current; 

    printf("Enter a message: ");

    fgets(message, sizeof(message), stdin);

    printf("Enter the shift number: ");
    
    scanf("%i", &shift);

    for ( int i = 0; message[i] != '\0'; i ++) { 
        
        current = message[i];

        if (islower(current)) {
            
            current = (current - 'a' + shift) % 26 + 'a';

        }

        if (isupper(current)) {
        
            current = (current - 'A' + shift) % 26 + 'A'; 
        }

        message[i] = current; 
    }

    printf("The Cipher is: %s", message);





}