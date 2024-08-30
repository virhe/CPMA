#include <stdio.h>

int main(void) {
    int item_number;
    float unit_price;
    int day, month, year;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");

    printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n", item_number, unit_price, month, day, year);

    return 0;
}