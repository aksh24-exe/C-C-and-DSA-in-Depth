#include <stdio.h>

int main() {

  float radius;
  printf("Enter the radius = ");
  scanf("%f", &radius);
  printf("Circumference of circle is %0.2f having the radius %0.2f",
         2 * 3.14 * radius, radius);
  printf("\n");
  return 0;
}