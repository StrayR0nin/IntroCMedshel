#include<stdio.h>

int main() {
    
    int windSpeed;
    printf("How fast is the wind speed in mph?\n");
    scanf("%d", &windSpeed); 

    if (windSpeed < 74) {
        printf("Not a Hurricane ");
    }

    if (windSpeed < 96 && windSpeed >= 74) {
        printf("Category One Hurricane "); 
    }

    if (windSpeed < 111 && windSpeed >= 96) {
        printf("Category Two Hurricane ");
    }

    if (windSpeed < 130 && windSpeed >= 111) {
        printf("Category Three Hurricane ");
    }

    if (windSpeed < 157 && windSpeed >= 130) {
        printf("Category Four Hurricane ");
    }

    if (windSpeed >= 157) {
        printf("Category Five Hurricane");
    }
 
}