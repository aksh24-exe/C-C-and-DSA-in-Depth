#include <stdio.h>

int main() {

  float principal, rate, time;
  printf("Enter the principal, rate and time = ");
  scanf("%f%f%f", &principal, &rate, &time);
  printf("Simple Interest is %0.2f", principal * rate * time / 100);
  printf("\n");
  return 0;
}