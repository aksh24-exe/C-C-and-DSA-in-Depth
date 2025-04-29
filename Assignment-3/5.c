#include <stdio.h>

int main() {
  int num;
  printf("Enter the number : ");
  scanf("%d", &num);
  printf("Print number without using last digit %d", num / 10);
  printf("\n");
  return 0;
}