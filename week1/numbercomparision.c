#include <stdio.h>

int main () {

  int n1, n2;
  printf("Number 1: \n");
  scanf("%d", &n1);
  printf("Number 2: \n");
  scanf("%d", &n2);

  if (n1 > n2) {
    printf("%d is greater than %d", n1, n2);
  }

  else {
    printf("%d is greater than %d", n2, n1);
  }

  return 0;

}
