#include <stdio.h>

#define PI 3.14f

int main(void) {
  int radius = 0;

  printf("Enter radius: ");
  scanf("%d", &radius);

  float volume = 4.0f / 3.0f * PI * radius * radius * radius;

  printf("Volume: %f\n", volume);

  return 0;
}
