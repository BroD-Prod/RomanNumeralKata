#include <stdio.h>
void romanNumeral(int k){
    if (k % 1){
        printf("I");
    }
    if (k == 5){
        printf("V");
    }
    if (k == 10){
        printf("X");
    }
    if (k == 50){
        printf("L");
    }
    if (k == 100){
        printf("C");
    }
    if (k == 500){
        printf("D");
    }
    if (k == 1000){
        printf("M");
    }
}

int main(){
    int k = 0;
    printf("Please enter a number from 1 - 1300: ");
    scanf("%d", &k);
    romanNumeral(k);
    return 0;
}