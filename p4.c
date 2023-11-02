#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int reverse_number(int n);

int main(){
    int palindrome = 0;
    for(int i = 100; i < 999; i++){
        for(int j = i; j < 999; j++){
            int x = i * j;
            int reverse = reverse_number(x); 

            if(reverse == x){
                if(palindrome < x){
                    palindrome = x;
                }
            }
        }
    }

    printf("%d\n", palindrome);

    return 0;
}

int reverse_number(int n){

    int reverse = 0, remainder;

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
  }
  return reverse;
}

