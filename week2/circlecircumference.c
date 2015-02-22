#include <stdio.h>

int main () {

  int radius;
  const float pi = 3.14159;
  float circumference, area;

  printf("Enter the radius of a circle: ");
  scanf("%d", &radius);

  circumference = 2 * pi * radius;
  area = pi * radius * radius;

  printf("Circumference of circle with radius: %.2d is: %.2f\n", radius, circumference);
  printf("Area of circle with radius: %.2d is: %.2f\n", radius, area);

  return 0;

}
