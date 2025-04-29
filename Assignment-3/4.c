#include <stdio.h>

int main() {
  int num;
  printf("Enter the Number : ");
  scanf("%d", &num);
  printf("Unit digit of %d is %d", num, num % 10);
  printf("\n");
  return 0;
}