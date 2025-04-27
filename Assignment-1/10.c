#include <stdio.h>

int main() {

  float radius;
  printf("Enter the radius  = ");
  scanf("%f", &radius);
  printf("Area of circle is %0.2f having the radius %0.2f", 3.14 * radius * radius,
         radius);
  return 0;
}