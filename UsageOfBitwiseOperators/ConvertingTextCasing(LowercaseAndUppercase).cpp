#include <stdlib.h>
#include <stdio.h>

int main(){
  char word[8] = "sREedEv";
  char *wordptr = &word[0];

  while(wordptr < &word[7]) {
    printf("UPPERCASE: %c\n", *wordptr & '_'); // converts the char into uppercase regardless of the current casing
    printf("LOWERCASE: %c\n", *wordptr | ' '); // converts the char into lowercase regardless of the current casing
    wordptr++;
  }

  return EXIT_SUCCESS;
}
/*So in the above example,
  we are using the bitwise AND with ‘_’ char as the right operand to convert each character in the string to uppercase.
  And to convert to a lowercase character,
  we are using the bitwise OR operator with the space ASCII character as the right operand.*/
