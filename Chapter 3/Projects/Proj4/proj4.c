#include <stdio.h>

int main(void) {
  int first = 0, second = 0, third = 0;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &first, &second, &third);

  printf("You entered %d.%d.%d\n", first, second, third);
  return 0;
}
