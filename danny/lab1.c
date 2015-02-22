/*Lab #1: Calculations and Display
 *
 *
 * Using only the techniques you have learned in IPC144 so far, write
 * the code for a C program that displays the value of each digit
 * in the 4 digit number 9876 such that EACH digit is stored in its own
 * unique whole number variable (OUTPUT should appear exactly as below):
 *
 * 9876
 * 9
 * 8
 * 7
 * 6
 */

#include <stdio.h>

int main () {

  int number;

  printf("Enter a 4 digit number: ");
  scanf("%d", &number);
  puts("");

  int first_digit = number / 1000;
  int second_digit = (number / 100) % 10;
  int third_digit = (number / 10) % 10;
  int fourth_digit = number % 10;

  printf("%d\n", number);
  printf("%d\n", first_digit);
  printf("%d\n", second_digit);
  printf("%d\n", third_digit);
  printf("%d\n", fourth_digit);

  return 0;

}
