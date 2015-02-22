#include <stdio.h>

  int cube (int num);

  int main() {

    int a, result;
    printf("Input an interger: \n");
    scanf("%d", &a);

    result = cube(a);

    printf("%d\n",result);

    return 0;

  }

  int cube(int num) {

    int result = num * num * num;
    return result;

  }
