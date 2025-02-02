#include<stdio.h>

int main() {

    int number; 
    int count;
    int sum; 

    printf("Enter a number from 1 through 10,000\n"); 
    scanf("%d", &number); 

    for (count = 1; count < number; count++ ) {
        if(number % count == 0) {
            sum = sum + count; 
        }
    }
    
    if (sum == number) {
        printf("Perfect Number");
    } else {
        printf("Not A Perfect Number");
    }
}