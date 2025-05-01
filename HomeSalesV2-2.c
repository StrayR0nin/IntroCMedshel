#include <stdio.h>

int main() {
    int sales[3] = {0};
    char initials[] = {'D', 'E', 'F'};

    char salesPerson;
    int sale; 
    int highestSale = 0;
    int total = 0;
    char highSP = ' ';

    while (1) {
        printf("Enter the salesperson's initial: \n");
        scanf(" %c", &salesPerson);

        if (salesPerson == 'Z' || salesPerson == 'z') {
            break; 
        }

        if (salesPerson == 'D' || salesPerson == 'd') {
            printf("Enter their sales amount: \n");
            scanf("%d", &sale);
            total += sale;
            sales[0] += sale;
            if (sale > highestSale) {
                highestSale = sale;
                highSP = 'D';
            }
        } else if (salesPerson == 'E' || salesPerson == 'e') {
            printf("Enter their sales amount: \n");
            scanf("%d", &sale);
            total += sale;
            sales[1] += sale;
            if (sale > highestSale) {
                highestSale = sale;
                highSP = 'E';
            }
        } else if (salesPerson == 'F' || salesPerson == 'f') {
            printf("Enter their sales amount: \n");
            scanf("%d", &sale);
            total += sale;
            sales[2] += sale;
            if (sale > highestSale) {
                highestSale = sale;
                highSP = 'F';
            }
        } else {
            printf("Error, invalid salesperson selected, please try again\n");
        }
    }

    printf("Grand Total: %d\n", total);
    printf("Highest Sale: %c\n", highSP);

    }