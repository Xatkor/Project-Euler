#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>


/* 

The sequence of triangle numbers is generated by adding the natural numbers

What is the value of the first triangle number to have over five hundred divisors?

 */


/* 

Time to compile = 8:16.56 total

 */

int main(void){

  int count = 0;
  int triangle_number = 0;
  int step = 0;
  int max_divisor = 1;
  while (count < 500){
    step++; 
    count = 0;
    triangle_number = (step*step + step) / 2;
    max_divisor = triangle_number / 2 + 1;
    //printf("triangle_number: %d\n", triangle_number);
    for (int i = 1; i <= max_divisor; i++){
      if (triangle_number % i == 0){
        count++;
        //printf("%d\n", i);
      }
    }
    
    if (triangle_number != 1){
      count++;
    }
    // 76576500
    //printf("---------------\n");
  }

  printf("Solucion: %d\n", triangle_number);
    
    return 0;
}