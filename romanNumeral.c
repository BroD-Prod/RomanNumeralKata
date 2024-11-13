#include <stdio.h>
#include <math.h>

void romanNumeralConversion(int k){
    while (k > 0) {
        printf("I");
        k -= 1;
    }
}

int main(){
    int k = 0;
    printf("Please enter a number from 1 - 1300: ");
    scanf("%d", &k);
    romanNumeralConversion(k);
    return 0;
}

void romanNumeralExact() {
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