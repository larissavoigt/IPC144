#include <stdio.h>

int main () {

  int number;

  printf("Enter a number from 1 to 12: \n");
  scanf("%d", &number);

  int i, total;

  for (i = 1; i <= 100; i++) {
    total = number * i;
    printf("%d * %d = %d\n", number, i, total);
  }

  return 0;

}
