#include <stdio.h>
#include <string.h>

int main() {

char phrase[300];
const char pig[4] = "ay ";
int i; 
char cL; 

printf("Enter a phrase: "); 

fgets(phrase, sizeof(phrase), stdin);

for (i = 0; phrase[i] != '\0'; i++) { 
   
    cL = phrase[i]; 
    
    if(cL == ' ') { 

        cL =(cL + "ay ");
    }

    phrase[i] = cL;  
}

printf("%s", phrase); 

}