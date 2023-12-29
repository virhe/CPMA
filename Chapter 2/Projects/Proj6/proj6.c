#include <stdio.h>

int main(void) {
  int value = 0, result = 0;

  printf("Enter a value: ");
  scanf("%d", &value);

  result =
      ((((3 * value + 2) * value - 5) * value - 1) * value + 7) * value - 6;

  printf("Result: %d\n", result);
  return 0;
}
