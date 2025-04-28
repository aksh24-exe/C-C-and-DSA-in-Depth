#include <stdio.h>

int main() {

  float lenght, breath, height;
  printf("Enter the length, breath and height = ");
  scanf("%f%f%f", &lenght, &breath, &height);
  printf("Volume of cuboid is %0.2f", lenght * breath * height);
  printf("\n");
  return 0;
}