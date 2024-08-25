#include <stdio.h>

int main(void) {
    int x = 0;
    
    printf("Enter a value: ");
    scanf("%d", &x);

    int first_component = 3 * x * x * x * x * x;
    int second_component = 2 * x * x * x * x;
    int third_component = 5 * x * x * x;
    int fourth_component = x * x;
    int fifth_component = 7 * x;
    int sixth_component = 6;

    int polynomial = first_component + second_component - third_component - fourth_component + fifth_component - sixth_component;

    printf("Value: %d\n", polynomial);

    return 0;
}