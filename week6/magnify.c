#include <stdio.h>

void magnify(int *a, int *b);

int main () {

  int num1, num2;
  printf("Input two integers: \n");
  scanf("%d%d", &num1, &num2);

  magnify(&num1, &num2); //Calling the function and passing by address

  printf("%d %d\n", num1, num2);
}

void magnify (int *a, int *b) {

  *a = *a * 2;
  *b = *b * 2;
}
