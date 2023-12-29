#include <stdio.h>

int main(void) {
  int amount = 0;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  int twenties = amount / 20;
  printf("$20 bills: %d\n", twenties);
  amount -= twenties * 20;

  int tens = amount / 10;
  printf("$10 bills: %d\n", tens);
  amount -= tens * 10;

  int fives = amount / 5;
  printf("$5 bills: %d\n", fives);
  amount -= fives * 5;

  printf("$1 bills: %d\n", amount);

  return 0;
}
