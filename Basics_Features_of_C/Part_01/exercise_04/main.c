#include <stdio.h>

int main(void) {
    float amount = 0.f;
    
    printf("Enter an amount: ");
    scanf("%f", &amount);

    float with_tax = amount * (1.05f);
    printf("With tax added: $%.2f\n", with_tax);

    return 0;
}