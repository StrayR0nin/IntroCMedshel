#include<stdio.h>

int count; 
int sum; 

int perfectNumber(int number);

int main() {
    
    perfectNumber(8128);

}

int perfectNumber(int number) {

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