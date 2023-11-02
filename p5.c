#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

//void prime_numbers(int **p, int maximo);

int main(){
    printf("%d\n",  9 * 5 * 11 * 13 * 7 * 16 * 17 * 19);
/*     int wall = 10;
    int N = 1;
    int i = 1;
    bool check = true;
    float limit = sqrt(wall);

    int *p = NULL;

    prime_numbers(&p, 10);

    int a[10];
    while (p[i] < wall){}
    {
        a[i] = 1;
        if (check){
            if (p[i] < limit)
            {
                a[i] = floor( log10(wall) / log(p[i]));
            } else {
                check = false;
            }
        }
        N = N * pow(p[i], a[i]);
        i += 1;
    }

    printf("%d", N);

    free(p);

    return 0; */
}

/* void prime_numbers(int **p, int maximo){

    *p = (int *)malloc(maximo * sizeof(int)); // Asigna memoria para el array de primos
    if (*p == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria.\n");
        exit(1);
    }

    int k = 0;
    for(int i = 2; i < 100; i++){
        int sum = 0;
        for(int j = 2; j < i ; j++)
            if(i % j == 0){
                sum += 1;
            }
        if(sum == 0 && k < maximo){
            (*p)[k] = i;
            k += 1;
        }
    }
} */
