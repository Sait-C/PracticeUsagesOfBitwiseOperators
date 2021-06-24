#include <stdio.h>
#include <stdlib.h>

int main(){
  int x=3;
  if(!(x&1)){
    printf("x is even");
  } else {
    printf("x is odd!");
  }
}
/*So the logic behind !(x&1) is that the binary representation of 1 is 0001
(considering only 4 bits for simplicity) and the place value of the least significant bit is 1.
All odd numbers can be represented as 2n+1. So the least significant bit is always 1 for odd numbers.
So when compare any odd number with 0001 using the bitwise AND, the output bytes will be 0001.
so by using the logical NOT operator, we are able to check for even numbers.
For odd numbers you just need to remove the logical NOT and just check (x&1).*/
