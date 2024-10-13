// Shows min smaller dollar amounts for user inputed dollars

#include <stdio.h>

int main(void)
{
	int dollars, twenties, tens, fives;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollars);

	twenties = dollars / 20;
	dollars = dollars - (twenties * 20);

	tens = dollars / 10;
	dollars = dollars - (tens * 10);

	fives = dollars / 5;
	dollars = dollars - (fives * 5);

	printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n",
		twenties, tens, fives, dollars);

	return 0;
}
