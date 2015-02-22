#include <stdio.h>

int main () {

  int rows = 5;
  int number_rows = 0;

  int stars = 1;
  int number_stars = 0;

  int spaces = rows - 1;
  int number_spaces = 0;


  while (number_rows < rows) {
    while (number_spaces < spaces) {
      printf(" ");
      number_spaces++;
    }
    while (number_stars < stars) {
      printf("*");
      number_stars++;
    }
    spaces -= 1;
    number_spaces = 0;
    stars += 2;
    number_stars = 0;
    printf("\n");
    number_rows++;
  }

  number_rows = 0;
  number_stars = 0;
  stars = (rows * 2) - 1;
  spaces = 0;
  number_spaces = 0;

  while (number_rows < rows) {
    while (number_spaces < spaces) {
      printf(" ");
      number_spaces++;
    }
    while (number_stars < stars) {
      printf("*");
      number_stars++;
    }
    spaces += 1;
    number_spaces = 0;
    number_stars = 0;
    stars -= 2;
    printf("\n");
    number_rows++;
  }

  return 0;

}
