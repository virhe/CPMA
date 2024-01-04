In the dweight.c program (Section 2.4), which spaces are essential?
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

---

Only the sections marked with [SPACE] require a space.\
Alternatively spaces could also be removed from printf, however the output would change.

```C
int[SPACE]main(void)
{
  int[SPACE]height, length, width, volume, weight;

  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Dimensions:[SPACE]%dx%dx%d\n", length, width, height);
  printf("Volume[SPACE](cubic inches):[SPACE]%d\n", volume);
  printf("Dimensional[SPACE]weight[SPACE](pounds):[SPACE]%d\n", weight);

  return[SPACE]0;
}
```