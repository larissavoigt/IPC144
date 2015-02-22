#include <stdio.h>

  int sum (int num1, int num2);

  int main() {

    int a, b, result;
    printf("Input two integers: \n");
    scanf("%d %d", &a, &b);

    result = sum(a, b);

    printf("%d\n",result);

    return 0;

  }

  int sum(int num1, int num2) {

    int result;
    result = num1 + num2;
    return result;

  }
