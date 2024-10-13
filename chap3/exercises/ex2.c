#include <stdio.h>

int main(void)
{
	printf("|%-8.1e|", 12345.6789);
	printf("|%10.6e|", 12345.6789);
	printf("|%-8.3f|", 12345.6789);
	printf("|%6.0f|", 12345.6789);
	printf("\n");

	return 0;
}
