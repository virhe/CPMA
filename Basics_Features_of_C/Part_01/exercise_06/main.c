#include <stdio.h>

int main(void) {
    int x = 0;
    
    printf("Enter a value: ");
    scanf("%d", &x);

    int polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Value: %d\n", polynomial);

    return 0;
}