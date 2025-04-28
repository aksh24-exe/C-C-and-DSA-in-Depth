#include <stdio.h>

int main() {
  int CP, SP, calculatePrice;
  printf("Enter the Cost Price of Bananas = ");
  scanf("%d", &CP);
  printf("Enter the Selling Price of Bananas = ");
  scanf("%d", &SP);
  calculatePrice = SP - CP;
  if (calculatePrice > 0)
    printf("Profit Earned upon selling 25 bananas");
  else
    printf("Loss Earned upon selling 25 bananas");
  printf("\n");
  return 0;
}