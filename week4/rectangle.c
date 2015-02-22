/* Write a program to create the following shape:
 * *********
 * *********
 * *********
 * *********
 * *********
 * */

#include <stdio.h>

int main () {

  int i, j;

  puts("");

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 8; j++) {
      printf("*");
    }
    printf("\n");
  }

  puts("");

  return 0;

}
