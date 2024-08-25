#include <stdio.h>

int main(void) {
    int amount = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int twenties = amount / 20;
    int remainder = amount % 20;

    int tens = remainder / 10;
    remainder %= 10;

    int fives = remainder / 5;
    remainder %= 5;

    int ones = remainder;

    printf("\n$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);

    return 0;
}