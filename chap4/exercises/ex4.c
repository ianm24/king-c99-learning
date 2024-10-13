// given statements, comments will say what is printed out (exercise 3 is for C89)
#include <stdio.h>

int main(void)
{
        int i=8,j=5,a,b,c,d;

        // a
        a= i / j;
        printf("%d\n",a);
        // "1"

        // b
        b= -i / j;
        printf("%d\n",b);
        // "-1"

        // c
        c= i / -j;
        printf("%d\n",c);
        // "-1"

        // d
        d= -i / -j;
        printf("%d\n",d);
        // "1"

        return 0;
}
