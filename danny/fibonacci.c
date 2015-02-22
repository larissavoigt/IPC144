#include <stdio.h>

void rFib (int first_number, int second_number, int terms);

int main () {

  int fib1, fib2, fterms;

  printf("Please enter two numbers of the Fibonacci sequence: \n");
  scanf("%d%d", &fib1, &fib2);
  printf("Please enter total of terms in the sequence to display: \n");
  scanf("%d", &fterms);

  rFib(fib1, fib2, fterms); //Calling function

  return 0;

}

void rFib (int first_number, int second_number, int terms) {

  int i, new_number;

  printf("%d %d ", first_number, second_number);

  for (i = 0; i < (terms - 2); i++) {
    new_number = first_number - second_number;
    printf("%d ", new_number);
    first_number = second_number;
    second_number = new_number;
  }

}
