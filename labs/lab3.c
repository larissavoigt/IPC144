#include <stdio.h>


int main() {

  int rows = 5;
  int number_of_rows = 0;

  int stars = 1;
  int number_of_stars = 0;

  int spaces = rows -1;
  int number_of_spaces = 0;

  while (number_of_rows < rows) {
    while (number_of_spaces < spaces ){
      printf(" ");
      number_of_spaces++;
    }
    while (number_of_stars < stars) {
      printf("*");
      number_of_stars++;
    }
    number_of_spaces = 0;
    spaces -= 1;
    number_of_stars = 0;
    stars += 2;
    printf("\n");
    number_of_rows++;
  }

  return 0;

}
