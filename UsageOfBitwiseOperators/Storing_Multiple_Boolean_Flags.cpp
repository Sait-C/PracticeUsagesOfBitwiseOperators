#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define SECURITY_CHECK_FLAG  0b00000001
#define TWO_FACTOR_AUTH_FLAG 0b00000010
#define JUST_A_FLAG_FLAG     0b00000100

int main(){
  // THE BULKY WAY
  // MEMORY CONSUMED: 3 * sizeof(bool) = 3 bytes
  bool security_check   = true;
  bool two_factor_auth  = false;
  bool just_a_flag_flag = true;


  // THE OPTIMIZED BITWISE WAY
  // MEMORY CONSUMED: sizeof(unsigned short int) =  2 bytes

  unsigned short int flags = 0;             /* 0b00000000 */
  // ENABLING FLAGS
  flags |= TWO_FACTOR_AUTH_FLAG;            /* 0b00000010 */
  flags |= JUST_A_FLAG_FLAG;                /* 0b00000110 */

  printf("flags = %d\n", flags);            /* 6 == 0b00000110*/

  // CHECKING FLAG STATES
  if(flags&JUST_A_FLAG_FLAG) {
    printf("JUST_A_FLAG_FLAG is Enabled\n");
  }

  if(flags&SECURITY_CHECK_FLAG) {
    printf("SECURITY_CHECK_FLAG is enabled\n");
  }

  // Disabling Flags
  flags ^= TWO_FACTOR_AUTH_FLAG;            /* 0b00000100 */
  printf("flags = %d\n", flags);           /* 4 == 0b00000100 */

  // will not print because of flag being displabled
  if(flags&TWO_FACTOR_AUTH_FLAG) {
    printf("TWO_FACTOR_AUTH_FLAG is Enabled\n");
  }

  return EXIT_SUCCESS;
}

/*You must have definitely wondered,
all of this just to save 1 byte?
well that’s not entirely true.
The increase in memory consumption per boolean flag is one byte,
but while using the bitwise flags,
you only need an additional byte every 8 flags you add to the program.
To increase or decrease the number of flags you just need to change the
datatype. if you need only less than 8 flags,
you can use “unsigned char ”. If you need more than 8 flags,
you can use “unsigned long int” or “unsigned long long int” depending on
your requirement.*/

