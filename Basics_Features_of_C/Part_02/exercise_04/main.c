#include <stdio.h>

int main(void) {
    int npa, sub_1, sub_2;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &npa, &sub_1, &sub_2);

    printf("You entered %d.%d.%d\n", npa, sub_1, sub_2);
    
    return 0;
}