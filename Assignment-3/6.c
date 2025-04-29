#include <stdio.h>

int main() {
  int num1, num2, swap;
  printf("Enter the number : ");
  scanf("%d%d", &num1, &num2);
  printf("Before swapping the Num1 value is %d and Num2 value is %d", num1,
         num2);
  swap = num1;
  num1 = num2;
  num2 = swap;
  printf("\n");
  printf("After swapping the Num1 value is %d and Num2 value is %d", num1,
         num2);
  printf("\n");
  return 0;
}