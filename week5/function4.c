#include <stdio.h>

int powerBase(int base, int exp) {
  int result = 1;
  int i;

  for (i = 0; i < exp; i++) {
    result = result * base;
  }
  return result;
}


int main () {

  int base, exponent, result;

  printf("Enter two integers: \n");
  scanf("%d %d", &base, &exponent);

  result = powerBase(base, exponent);

  printf("%.1d\n", result);

  return 0;

}
