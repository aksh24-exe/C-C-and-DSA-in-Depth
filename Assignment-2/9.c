#include <stdio.h>

int main() {
  int DD, MM, YYYY;
  printf("Enter the DD/MM/YYYY :");
  scanf("%d/%d/%d", &DD, &MM, &YYYY);
  printf("Day - %d, Month - %d, Year - %d", DD, MM, YYYY);
  printf("\n");
  return 0;
}