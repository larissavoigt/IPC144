/* Write a program to create the following shape:
 * *
 * **
 * ***
 * ****
 * *****
 * */

#include <stdio.h>

int main () {

  int i, j;
  int rows = 5;

  for (i = 0; i < rows; i++) {
    for (j = 0; j < i+1; j++) {
    printf("*");
    }
    printf("\n");
  }

  return 0;

}
