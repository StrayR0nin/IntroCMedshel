#include <stdio.h>
#include <stdbool.h>

int main() {

    int temp[5];
    int i;
    int sum = 0; 
    bool warmer = false;
    bool cooler = false;
    int size = 5;
    
    printf("Enter 5 valid temperatures between -30 and 130:\n");
   
    for(int i = 0; i < 5; i++) {

        scanf("%d", &temp[i]);
        if(temp[i] < -30 || temp[i] > 130) {

            printf("Temperature %d is invalid, Please enter a valid temperature between -30 and 130\n", temp[i]);
            scanf("%d", &temp[i]);

        }
        
        sum += temp[i];

        if(temp[i] <= temp[i - 1]) { 

            cooler = true; 

        } else if (temp[i] >= temp[i - 1]) {
          
            warmer = true; 

        }
        

    }

    if(cooler == true) {

        printf("Getting cooler\n");

    } else if (warmer == true) {
        
        printf("Getting warmer\n");

    } else {

        printf("It's a mixed bag\n");

    }
    

    printf("5-day Temperature: ");

    for(int i = 0; i < 5; i++) {

        printf("%d ", temp[i]);
    }
    
    float avg = (float)sum / size; 
    printf("\n");
    printf("The average temperature is %f degrees", avg);

}