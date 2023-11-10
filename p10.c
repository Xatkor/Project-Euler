#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

bool is_prime(int a);

int main(void){
    unsigned long long sum = 2;
    int BelowNumber = 2000000;

    for (int i = 3; i <= BelowNumber; i+=2){
        if(is_prime(i)){
            sum += i;
        }
    }

    printf("%llu\n", sum);

    return 0;
}

bool is_prime(int a){

    for(int i = 2; i <= (int)sqrt(a) + 1; i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}