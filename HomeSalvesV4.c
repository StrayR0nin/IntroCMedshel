#include <stdio.h>
#include <string.h>

struct Salesperson {
    char name[100];
    char initials; 
    int sales; 
};



int main() {

    FILE *file = fopen("sales_data.txt", "w");
    if (file != NULL) {
        fclose(file);
    }
    

    struct Salesperson salespeople[3] = {
        {"Danielle", 'D', 0},
        {"Edward", 'E', 0},
        {"Francis", 'F', 0}
    };

    file = fopen("sales_data.txt", "r");
    if(file != NULL) {
        for (int i = 0; i < 3; i++) {
            fscanf(file, "%s %c %d", salespeople[i].name, &salespeople[i].initials,&salespeople[i].sales);
        }
        fclose(file);
    }
    
    int grandTotal = 0;
    char input[100];
    int isZ = 1;

    while (isZ != 0) {
        printf("What is the name of the salesperson?\n");
        scanf("%s", input);

        if(strcmp(input,"Z")== 0 || strcmp(input, "z") == 0) {
            isZ = 0; 
        }

        if(strcmp(input, "Danielle") ==  0) {
            printf("How much did they sell?\n");
            scanf("%d", &salespeople[0].sales);
            grandTotal += salespeople[0].sales;
        } else if(strcmp(input, "Edward") ==  0) {
            printf("How much did they sell?\n");
            scanf("%d", &salespeople[1].sales);
            grandTotal += salespeople[1].sales;
        } else if(strcmp(input, "Francis") ==  0) { 
            printf("How much did they sell?\n");
            scanf("%d", &salespeople[2].sales);
            grandTotal += salespeople[2].sales;
        } else {
            printf("Salesperson not found. Try again.\n");
        }

        }

    printf("The grand total is: $%d\n", grandTotal);

    int highestIndex;

    if (salespeople[0].sales >= salespeople[1].sales && salespeople[0].sales >= salespeople[2].sales) {
        highestIndex = 0;
    } else if (salespeople[1].sales >= salespeople[0].sales && salespeople[1].sales >= salespeople[2].sales) {
        highestIndex = 1;
    } else {
        highestIndex = 2;
    }

    printf("Top Salesperson: %s with $%d in sales!\n", salespeople[highestIndex].name, salespeople[highestIndex].sales);
    
    for (int i = 0; i < 3; i++) {
        fprintf(file, "%s %c %d\n", salespeople[i].name, salespeople[i].initials, salespeople[i].sales);
    }
    
    fclose(file);

    }