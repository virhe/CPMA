Condense the dweight.c program by (1) replacing the assignments to height, length and width with initializers and (2) removing the weight variable, instead calculating (volume + 165) / 166 within the last printf.

Original:
```C
#include <stdio.h>

int main(void)
{
  int height, length, width, volume, weight;

  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}
```