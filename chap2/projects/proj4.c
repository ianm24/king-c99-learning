// Gets dollars and cents from user then displays the amount with 5% tax added

#include <stdio.h>

#define TAX 0.05f

int main(void)
{
	float amount, total;

	printf("Enter an amount: ");
	scanf("%f", &amount);
	total = amount + (amount * TAX);

	printf("With tax added: $%.2f\n", total);

	return 0;
}
