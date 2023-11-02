#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

bool is_prime(int a);

int main(){

    const unsigned long long number = 600851475143;
    int value = 0;
    int prime;
    int i = 1;

    while (value < 10001) {
        i++;
        if(is_prime(i)){
            prime = i;
            value += 1;

        }
    }

    printf("%d: %d", value, prime);
    printf("\n");
    return 0;
}

bool is_prime(int a){

    for(int i = 2; i <= (int)(a / 2 ); i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}
