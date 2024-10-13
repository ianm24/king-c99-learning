// user enters 2 digits, program prints them in reverse order 
#include <stdio.h>

int main(void)
{
        int num_10,num_8_dig_1,num_8_dig_2,num_8_dig_3,
            num_8_dig_4,num_8_dig_5;

        printf("Enter a number between 0 and 32767: ");
        scanf("%d",&num_10);

        num_8_dig_5 = num_10 / (8*8*8*8);
        num_10 -= num_8_dig_5 * (8*8*8*8);

        num_8_dig_4 = num_10 / (8*8*8);
        num_10 -= num_8_dig_4 * (8*8*8);

        num_8_dig_3 = num_10 / (8*8);
        num_10 -= num_8_dig_3 * (8*8);

        num_8_dig_2 = num_10 / 8;
        num_10 -= num_8_dig_2 * 8;

        num_8_dig_1 = num_10 % 8;
        num_10 -= num_8_dig_1;

        printf("In octal, your number is %1d%1d%1d%1d%1d\n", 
                        num_8_dig_5, num_8_dig_4, num_8_dig_3,
                        num_8_dig_2, num_8_dig_1);

        return 0;
}
