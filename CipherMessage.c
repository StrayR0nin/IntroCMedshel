#include <stdio.h> 
#include <ctype.h> 

int main() {

    char message[500];
    int shift;
    char current; 

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    printf("Enter the shift number: ");    
    scanf("%d", &shift);

    shift = shift %26; 

    for ( int i = 0; message[i] != '\0'; i ++) { 
        
        current = message[i];

        if (islower(current)) {
            
            current = (current - 'a' + shift) % 26 + 'a';

        }

        else if (isupper(current)) {
        
            current = (current - 'A' + shift) % 26 + 'A'; 
        } else {
            current = message[i];
        }

        message[i] = current; 
    }

    printf("The Cipher is: %s", message);





}