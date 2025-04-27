#include <stdio.h>

int main() {

  float length, breath;
  printf("Enter the length and breath = ");
  scanf("%f%f", &length, &breath);
  printf("Area of Reactangle is %0.2f", length * breath);
  return 0;
}