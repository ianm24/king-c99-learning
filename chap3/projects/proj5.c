// Takes in numbers 1 to 16 and prints it in 4x4 square and prints row,column,diagonal sums
#include <stdio.h>

int main(void)
{

	int n1, n2, n3, n4, n5, n6, n7, n8,
		n9, n10, n11, n12, n13, n14,
		n15, n16, row_sum1, row_sum2,
		row_sum3, row_sum4, col_sum1,
		col_sum2, col_sum3, col_sum4,
		diag_sum1, diag_sum2;

	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
		&n1,&n2,&n3,&n4,&n5,&n6,&n7,
		&n8,&n9,&n10,&n11,&n12,&n13,
		&n14,&n15,&n16);

	row_sum1 = n1+n2+n3+n4;
	row_sum2 = n5+n6+n7+n8;
	row_sum3 = n9+n10+n11+n12;
	row_sum4 = n13+n14+n15+n16;

	col_sum1 = n1+n5+n9+n13;
	col_sum2 = n2+n6+n10+n14;
	col_sum3 = n3+n7+n11+n15;
	col_sum4 = n4+n8+n12+n16;

	diag_sum1 = n1+n6+n11+n16;
	diag_sum2 = n13+n10+n7+n4;

	printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",
		n1,n2,n3,n4,n5,n6,n7,n8,n9,
		n10,n11,n12,n13,n14,n15,n16);
	printf("Row sums: %d %d %d %d\n",
		row_sum1, row_sum2, row_sum3, row_sum4);
	printf("Column sums: %d %d %d %d\n",
		col_sum1, col_sum2, col_sum3, col_sum4);
	printf("Diagonal sums: %d %d\n",
		diag_sum1, diag_sum2);

	return 0;
}
