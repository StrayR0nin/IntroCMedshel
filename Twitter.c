#include<stdio.h>
#include<string.h>

int main() {

    char text[300] = "";
    
    printf("Type your text and press enter:\n");
    fgets(text, sizeof(text), stdin);
    size_t length = (strlen(text));
    
    if (length > 140){
        printf("Rejected");
    } else {
        printf("Posted");
    }

}