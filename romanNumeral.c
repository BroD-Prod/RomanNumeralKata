#include <stdio.h>
#include <math.h>

void romanNumeralConversion(int k){
    while (k > 0) {
        if(k >= 1000){
            printf("M");
            k -= 1000;
        }
        else if(k >= 500){
            printf("D");
            k -= 500;
        }
        else if(k >= 100){
            printf("C");
            k -= 100;
        }
        else if(k >= 50){
            printf("L");
            k -= 50;
        }
        else if(k >= 10){
            printf("X");
            k -= 10;
        }
        else if(k >= 5){
            printf("V");
            k -= 5;
        }
        else {
            printf("I");
            k -= 1;
        }
    }
}

int main(){
    int k = 0;
    printf("Please enter a number from 1 - 1300: ");
    scanf("%d", &k);
    if (k < 1300){
        printf("That was not less than 1300, please enter a number from 1 - 1300: ");
        scanf("%d", &k);
    }
    else {
        romanNumeralConversion(k);
    }
    return 0;
}

void romanNumeralExact(int k) {
    if (k == 5) {
        printf("V");
    }
    if (k == 10) {
        printf("X");
    }
    if (k == 50) {
        printf("L");
    }
    if (k == 100) {
        printf("C");
    }
    if (k == 500) {
        printf("D");
    }
    if (k == 1000) {
        printf("M");
    }
}