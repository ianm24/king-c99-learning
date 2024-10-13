// given statements, comments will say what is printed out (exercise 3 is for C89)
#include <stdio.h>

int main(void)
{
        int i=8,j=5,a,b,c,d;

        // a
        a= i % j;
        printf("%d\n",a);
        // "3"

        // b
        b= -i % j;
        printf("%d\n",b);
        // "-3"

        // c
        c= i % -j;
        printf("%d\n",c);
        // "3"

        // d
        d= -i % -j;
        printf("%d\n",d);
        // "-3"

        return 0;
}
