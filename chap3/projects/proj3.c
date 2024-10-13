// Takes in ISBN-13 and outputs the different parts
#include <stdio.h>

int main(void)
{

	int isbn, gs1_prefix, group_id, publisher_code, item_num, check_digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_id, &publisher_code, &item_num, &check_digit);

	printf("GS1 prefix: %.3d\n", gs1_prefix);
	printf("Group identifier: %.1d\n", group_id);
	printf("Publisher code: %.3d\n", publisher_code);
	printf("Item number: %.6d\n", item_num);
	printf("Check digit: %.1d\n", check_digit);

	return 0;
}
