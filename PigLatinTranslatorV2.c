#include <stdio.h>
#include <string.h>

int main() {

    char phrase[300];
    char word[50];
    char result[500] = " ";
    int i = 0;
    int j = 0; 

    printf("Enter a phrase: "); 
    fgets(phrase, sizeof(phrase), stdin);
    phrase[strcspn(phrase, "\n")] = '\0';

    while (1) {
        
        char c = phrase[i];

        if (c != ' ' && c != '\0') {
            word[j++] = c;
        } else {
            word[j] = '\0';
            if (j > 0) {
                sprintf(result + strlen(result), "%s%cay", word + 1, word[0]);
                if (c == ' ') strcat(result, " ");
            }

            j = 0;
        }

        if (c == '\0') {
            break;
        }
        i++;
    }

    printf("%s\n", result);

}