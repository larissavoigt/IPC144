/* Write a program to print all positive ODD numbers on the screen. starting from 99, ending 1
 * 99 97 95 … 1. */

#include <stdio.h>

int main () {

  int odd_number;

  for (odd_number = 99; odd_number >= 1; odd_number -= 2) {
    printf("%d\n", odd_number);
  }

  return 0;

}
