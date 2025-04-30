#include<stdio.h>

int main() {

    char salesPerson;
    int sale;
    int total = 0;
    int highestSale = 0;
    char highSP;


    while (1) {
        
        printf("Enter the salesperson's initial:\n");
        scanf(" %c", &salesPerson);

        if (salesPerson == 'Z' || salesPerson == 'z') {
            break;
        }
      
        switch(salesPerson) {
            case 'd': case 'D':
            case 'e': case 'E':
            case 'f': case 'F':
                printf("Enter their sales amount:\n");
                scanf("%d", &sale);
                total += sale;

                if(sale > highestSale) {
                    highestSale = sale;
                    highSP = salesPerson; 
                }
                break;
            
            default:
                printf("Error, invalid salesperson selected, please try again");
        }
    }

    printf("Grand Total: %d\n", total);
    printf("Highest Sale: %c", highSP);

}
