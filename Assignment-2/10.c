#include <stdio.h>

int main() {
  int HH, MM;
  printf("Enter the hour and minute (HH:MM) :");
  scanf("%d:%d", &HH, &MM);
  if (MM > 60) {
    MM = MM - 60;
    HH = HH + 1;
  }
  printf("HH - %d, MM - %d", HH, MM);
  printf("\n");
  return 0;
}