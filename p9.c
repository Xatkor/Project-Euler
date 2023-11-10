#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

int main(void){
    
    int perimeter = 1000;
    int solution = 1;

    for (int a = 1; a < perimeter; a++){
        for (int b = a + 1; b < perimeter - a; b++){
            int c2 = a*a + b*b;
            int c = sqrt(c2);
            if (c*c == c2 && a + b + c == 1000){
                solution = a * b * c;
                printf("%i %i %i\n", a, b, c);
            }
        }
    }
    
    printf("%d\n", solution);

    return 0;
}