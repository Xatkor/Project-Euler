#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int fibonacci(int n);

int main(){
    int i = 0;
    int sum = 0;
    int fb = fibonacci(0);

    while(fb < 4000000){
        fb = fibonacci(i);
        if(fb % 2 == 0){
            sum += fb;
        }
        i++;
    }

    printf("%d\n", sum);

    return 0;
}

int fibonacci(int n){
    int tmp = 0;
    int prev_value = 1;
    int next_value = 1;

    for(int i = 0; i < n; i++){
        tmp = prev_value + next_value;
        prev_value = next_value;
        next_value = tmp;
    }

    return next_value ; 
}
