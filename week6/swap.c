#include <stdio.h>

void swap(int *num1, int *num2);

int main () {
  int a, b;
  printf("Enter two integers: \n");
  scanf("%d%d", &a, &b);

  swap(&a, &b); //Calling the function

  printf("a = %d, b = %d", a, b);
}

void swap(int *num1, int *num2) {
  int change;
  change = *num1;
  *num1 = *num2;
  *num2 = change;

}
