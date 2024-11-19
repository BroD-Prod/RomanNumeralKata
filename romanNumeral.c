#include <stdio.h>
#include <string.h>
#include <math.h>

void romanNumeralConversion(int k){
    int intergerNumerals [] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *romanNumerals [] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    for(int i=0; i < 13; i++){
        while(k >= intergerNumerals[i]){
            printf("%s", romanNumerals[i]);
            k -= intergerNumerals[i];
        }
    }
}

int main(){
    int k = 0;
    printf("Please enter a number from 1 - 1300: ");
    scanf("%d", &k);
    if (k > 1300){
        printf("That was not less than 1300, please enter a number from 1 - 1300: ");
        scanf("%d", &k);
    }
    else {
        romanNumeralConversion(k);
    }
    return 0;
}