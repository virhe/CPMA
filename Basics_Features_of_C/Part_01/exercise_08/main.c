#include <stdio.h>

int main(void) {
    float loan = 0.f;
    float interest = 0.f;
    float payment = 0.f;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    float monthly_interest = interest / 100 / 12;

    loan = (loan - payment) + loan * monthly_interest;
    printf("\nBalance remaining after first payment: $%.2f\n", loan);

    loan = (loan - payment) + loan * monthly_interest;
    printf("Balance remaining after second payment: $%.2f\n", loan);

    loan = (loan - payment) + loan * monthly_interest;
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}