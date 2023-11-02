#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

int main(){

    int n = 100;
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            sum += i * j;
        }

    }
    
    printf("%d\n", 2 * sum);

    // Otra forma

    int suma = n * (n + 1) / 2;
    int sum_sq = (2 * n + 1) * (n + 1) * n / 6;

    printf("%2f\n", pow(suma, 2) - sum_sq);

    return 0; 
}
