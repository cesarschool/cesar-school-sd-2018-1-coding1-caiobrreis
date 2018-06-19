#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(char sentence[], int length) {
  printf("\nisPalindrome::START: %s, %d\n", sentence, length);

  int n;
  int linicial = 0;
  int lmeio = length/2;
  int lfinal = length -1;

  for (n = linicial; n < lmeio; n++) {
    if (sentence[linicial] != sentence[lfinal]) {
      printf("false");
      printf("\nisPalindrome::END\n");
        return false;
      } linicial = linicial + 1;
      lfinal = lfinal - 1;
    }

    printf("true");

    printf("\nisPalindrome::END\n");
    return true;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: Palindrome ###\n");

    // true cases
    isPalindrome("ovo", 3);
    isPalindrome("arara", 5);

    // false cases
    isPalindrome("cesar", 5);
    isPalindrome("school", 6);

    return 0;
}
