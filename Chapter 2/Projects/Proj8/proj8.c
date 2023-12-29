#include <stdio.h>

int main(void) {
  float loan = 0.0f, interest = 0.0f, monthly_interest = 0.0f, payment = 0.0f;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &interest);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  monthly_interest = interest / 100 / 12 + 1;

  loan *= monthly_interest;
  loan -= payment;
  printf("Balance remaining after first payment: %.2f\n", loan);

  loan *= monthly_interest;
  loan -= payment;
  printf("Balance remaining after second payment: %.2f\n", loan);

  loan *= monthly_interest;
  loan -= payment;
  printf("Balance remaining after third payment: %.2f\n", loan);

  return 0;
}
