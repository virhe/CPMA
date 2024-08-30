#include <stdio.h>

int main(void) {
    int gs1, group_indentifier, publisher_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_indentifier, &publisher_code, &item_number, &check_digit);

    printf("GS1 Prefix: %d\n", gs1);
    printf("Group identifier: %d\n", group_indentifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;
}