
#include <stdio.h>

int main () {

  float height, base;

  printf("Enter height: ");
  scanf("%f", &height);

  printf("Enter base: ");
  scanf("%f", &base);

  float area = (height * base) / 2;

  printf("Triangle area: %.2f \n", area);

  return 0;

}
