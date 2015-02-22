/* FUTURE VALUE
 *
 * Design and code a program that calculates the future value of a specified amount of money.  Your program prompts for and accepts a principal amount,
 * an interest rate and the number of periods.
 *
 * The formula for future value is future value = principal * ( 1 + rate ) (number of periods)
 * Decompose your problem into two modules: one the accepts the input and displays the output and one that performs the calculation itself.
 * Use structured design principles in your design.  Do not use any library functions apart from those prototyped in <stdio.h>.
 *
 * Document your function with a brief description of the function's purpose, its parameters and its return value.
 *
 * The output from your program should look something like:
 *
 * Investment Calculator
 * =====================
 * Principal  :  1000
 * Annual Rate:  0.06
 * No of Years:  5
 *
 * The future value is $1338.23
 */

#include <stdio.h>

// declaring the function
  float calculator(float principal_value, float interest, int periods) {
    float base = (1 + interest);
    float final = base;

    int i;
    for (i = 1; i < periods; i++) {
      final *= base;
    }

    float future_value = principal_value * final;

    return future_value;
  }

int main () {

  float pv, fv, i; // principal value, future value and interest rate
  int n; // period

  printf("=====================\n");
  printf("Investment Calculator\n");
  printf("=====================\n");
  printf("Enter principal value: \n");
  scanf("%f", &pv);
  printf("Enter interest rate: \n");
  scanf("%f", &i);
  printf("Enter number of periods: \n");
  scanf("%d", &n);
  puts("");

  fv = calculator(pv, i, n);

  printf("=====================\n");
  printf("Principal: %.2f \n", pv);
  printf("Annual Rate: %.2f \n", i);
  printf("Number of Years: %d \n", n);
  puts("");
  printf("The future value is $%.2f \n", fv);

}
