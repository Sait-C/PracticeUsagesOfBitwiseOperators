#include <stdlib.h>
#include <stdio.h>

int main(){
  int a=3, b=4;
  printf("a: %d; b: %d\n");

          /* a == 0011; b == 0100 */
  a ^= b; /* a == 0111; b == 0100 */
  b ^= a; /* a == 0111; b == 0011 */
  a ^= b; /* a == 0100; b == 0011 */


  printf("a: %d; b: %d\n");
  return EXIT_SUCCESS;
}
