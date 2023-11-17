#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>


/* 
Longest Collatz Sequence

Which starting number, under one million, produces the longest chain?

 */


/* 

Time to compile = 

 */

int lookup[1000000] = { 0 };

unsigned int NextNumber(unsigned int value) {
  if ((value % 2) == 0) value >>= 1;
  else value = (value * 3) + 1;
  return value;
}

int main() {
  int i = 0;
  int chainlength = 0;
  int longest = 0;
  int longestchain = 0;
  unsigned int value = 0;
  for (i = 1; i < 100; ++i) {
    chainlength = 0;
    value = i;
    while (value != 1) {
      chainlength++;
      value = NextNumber(value);
      if (value >= 1000000) continue;
      if (lookup[value] != 0) {
        chainlength += lookup[value];
        break;
      }
    }

    lookup[i] = chainlength;

    if (longestchain < chainlength) {
      longest = i;
      longestchain = chainlength;
    }
  }
  printf("\n%d: %d\n", longest, longestchain);
/*   for (int j = 0; j < sizeof(lookup) / sizeof(lookup[0]); j++){
    printf("%d\n", lookup[i]);
  } */
}