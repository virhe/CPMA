#include <stdio.h>

int main(void) {
  int value = 0, result = 0;

  printf("Enter a value: ");
  scanf("%d", &value);

  result = 3 * value * value * value * value * value;
  result += 2 * value * value * value * value;
  result -= 5 * value * value * value;
  result -= value * value;
  result += 7 * value - 6;

  printf("Result: %d\n", result);
  return 0;
}
