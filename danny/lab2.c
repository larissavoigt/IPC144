/* Lab #2: Table of Numbers, Squares, Cubes, and Sums
 *
 * Using only the techniques you have learned in IPC144 so far
 * (including the while(...) LOOP), write the code for a C program that
 * calculates the squares and cubes of the numbers from 0 to 10 as
 * well as the sum of all 3 of the values on each line and displays the
 * values in table format (including the title) as below:
 *
 * n s c t
 * 0 0 0 0
 * 1 1 1 3
 * 2 4 8 14
 * 3 9 27 39
 * 4 16 64 84
 * 5 25 125 155
 * 6 36 216 258
 * 7 49 343 399
 * 8 64 512 584
 * 9 81 729 819
 * 10 100 1000 1110
 *
 *
 * n = number (0 to 10)
 * s = square of n
 * c = cube of n
 * t = sum of n + s + c
 */

#include <stdio.h>

int main () {

  int n = 0;
  int s = n * n;
  int c = n * n * n;
  int t = n + s + c;

  printf("n s c t\n");

  while ( n <= 10 ) {
    s = n * n; //square
    c = (n * n) * n; // cube
    t = n + s + c; // sum of all
    printf("%d %d %d %d\n", n, s, c, t);
    n++;
  }

  return 0;

}
