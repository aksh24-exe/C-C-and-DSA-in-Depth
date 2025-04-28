#include <stdio.h>

int main() {

  float num1, num2, num3;
  printf("Enter the three number of the Average = ");
  scanf("%f%f%f", &num1, &num2, &num3);
  float avg = (num1 + num2 + num3) / 3;
  printf("Average of three number is %0.2f", avg);
  printf("\n");
  return 0;
}