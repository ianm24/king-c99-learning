// given x from user, prints 3x^5+2x^4-5x^3-x^2+7x-6

#include <stdio.h>

int main(void)
{
	float x, result;

	printf("What is x? ");
	scanf("%f", &x);
	result = ((((3 * x + 2) *
		x - 5) * x - 1) *
		x + 7) * x - 6;

	printf("f(%.2f) = %.2f\n", x, result);

	return 0;
}
