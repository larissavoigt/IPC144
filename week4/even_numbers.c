/* Write a program to print all positive EVEN numbers on the screen. starting from 2, ending 100
 * 2 4 6 … 100. */

#include <stdio.h>

int main () {

  int even_number;

  for (even_number = 2; even_number <= 100; even_number += 2) {
    printf("%d\n", even_number);
  }

  return 0;

}
