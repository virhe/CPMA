#include <stdio.h>

int main(void) {
  int item = 0, month = 0, day = 0, year = 0;
  float price = 0.0f;

  printf("Enter item number: ");
  scanf("%d", &item);
  printf("Enter unit price: ");
  scanf("%f", &price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
  printf("%-d\t\t$  %.2f\t%-.2d/%-.2d/%-d\n", item, price, month, day, year);

  return 0;
}
