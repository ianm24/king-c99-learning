// Calculates remaining balance on loan after first, second, and third monthly payments

#include <stdio.h>

int main(void)
{
	float loan_amount, interest_rate, monthly_payment;

	printf("Enter the amount of the loan: ");
	scanf("%f", &loan_amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	// interest rate converted to monthly
	interest_rate = (interest_rate / 100) / 12;

	// amount + interest - payment
	// First payment
	loan_amount = loan_amount + (loan_amount * interest_rate) - monthly_payment;
	printf("Balance remaining after first payment: $%.2f\n", loan_amount);

	// Second payment
	loan_amount = loan_amount + (loan_amount * interest_rate) - monthly_payment;
	printf("Balance remaining after second payment: $%.2f\n", loan_amount);

	// Third payment
	loan_amount = loan_amount + (loan_amount * interest_rate) - monthly_payment;
	printf("Balance remaining after third payment: $%.2f\n", loan_amount);
	
	return 0;
}
