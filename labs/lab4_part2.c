/* Design and code a program that displays a table of prime numbers in columnar format.  Your program prompts for and accepts the upper limit on the
 * primes to be displayed and the number of primes to be displayed in any single row.
 *
 * Apply structured programming principles to your design.  Do not use any library functions apart from <stdio.h> functions.
 *
 * Document your function header with a brief description of the function's purpose, its parameters and its return value.
 *
 * A prime number is an integer that is wholly divisible by 1 and itself only.  1 is not considered a prime number.
 *
 */

#include <stdio.h>
#define MAX_SIZE 1000

// find prime numbers
// upper_limit - maximum number to search for prime numbers / inputed by user
// primes[] - array to store prime numbers found
int find_prime_numbers(int upper_limit, int primes[]) {
  int i, j;
  int primes_index = 0; //array index

  // starting loop from 2 - first prime number
  for(i = 2; i <= upper_limit; i++) {
    int is_prime = 1; // assume number is a prime number
    // check if number is divisible by numbers of the prime list
    // if number is divible by any number of the list, it is not a prime number
    for(j = 0; j < primes_index; j++) {
      if (i % primes[j] == 0) {
        is_prime = 0; // condition turns to false
        break; // break the loop
      }
    }
    if (is_prime) { // add prime number to prime list
      primes[primes_index] = i;
      primes_index++; // increment prime counter
    }
  }

  return primes_index; // return total of numbers in prime list
}

// build prime table
// primes_index - number of elements contained in array
// primes[] - array of prime numbers
// columns - number of columns (inputed by user)
void print_primes_table(int primes_index, int primes[], int columns) {
  int i;
  for(i = 0; i < primes_index; i++) {
    if (i > 0 && i % columns == 0) puts(""); // break the line every N columns
    printf("%4d ", primes[i]); // print every number in a 4-slot block
  }
  puts("");
}

int main () {

  int upper_limit, columns;

  printf("Table of Primes\n");
  printf("===============\n");
  printf("Upper limit: ");
  scanf("%d", &upper_limit);
  printf("# of columns: ");
  scanf("%d", &columns);

  int primes[MAX_SIZE];
  int primes_index = find_prime_numbers(upper_limit, primes);

  print_primes_table(primes_index, primes, columns);

  return 0;
}
