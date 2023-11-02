#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int fibonacci(int n);
bool is_prime(int a);

int main(){

    const unsigned long long number = 600851475143;
    int value = 0;

    for(int i = 2; i < number; i++){
        if(number % i == 0 && is_prime(i)){
            if(value < i){
                value = i;
            }
        }
    }
    printf("%d ", value);
    printf("\n");
    return 0;
}

bool is_prime(int a){

    for(int i = 2; i < (int)(a / 2 ); i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}
