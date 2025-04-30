#include <stdio.h>
#include <stdbool.h>

int main() {

    int temp[5];
    int sum = 0; 
    bool increasing = true;
    bool decreasing = true;
    int size = 5;
    
    printf("Enter 5 valid temperatures between -30 and 130:\n");
   
    for(int i = 0; i < size; i++) {

        scanf("%d", &temp[i]);
        if(temp[i] < -30 || temp[i] > 130) {

            printf("Temperature %d is invalid, Please enter a valid temperature between -30 and 130\n", temp[i]);
            scanf("%d", &temp[i]);

        }
        
        sum += temp[i];

        for( int i = 1; i < size; i++) {
            
            if(temp[i] <= temp[i - 1]) {
                increasing = false; 
            }

            if(temp[i] >= temp[i - 1]) {
                decreasing = false; 
            }
        }
        

    }

    if(increasing) {

        printf("Getting cooler\n");

    } else if (decreasing) {
        
        printf("Getting warmer\n");

    } else {

        printf("It's a mixed bag\n");

    }
    

    printf("5-day Temperature: ");

    for(int i = 0; i < size; i++) {

        printf("%d ", temp[i]);
    }
    
    float avg = (float)sum / size; 
    printf("\nThe average temperature is %.2f degrees\n", avg);

}