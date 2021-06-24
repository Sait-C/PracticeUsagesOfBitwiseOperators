#include <stdio.h>
#include <stdlib.h>

int main(){
  int a=32;
  if(a > 0 && (a & (a - 1)) == 0){
    printf("%d is a power of 2", a);
  }
  return EXIT_SUCCESS;
}

/*To understand how the above condition works, we need to understand a property of powers of two. Powers of two when represented in binary have only one set bit i.e., only one bit has the value of 1. Any power of 2, minus 1 would have binary representation where all bits are set except the bit that represents the next number (which is a power of 2).
Using the bitwise AND with the number n and n-1, we can conclude that the number in question is a power of two if it returns 0.
To understand how the above condition works, we need to understand a property of powers of two. Powers of two when represented in binary have only one set bit i.e., only one bit has the value of 1. Any power of 2, minus 1 would have binary representation where all bits are set except the bit that represents the next number (which is a power of 2).
Using the bitwise AND with the number n and n-1, we can conclude that the number in question is a power of two if it returns 0.*/
