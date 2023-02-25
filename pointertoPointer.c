#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("a = %d\n", a);
    printf("a = %d\n", *p);
    printf("a = %d\n", **q);
    printf("a = %d\n", ***r);
    ***r = 25;
    printf("NEWLINE============\n");

    printf("a = %d\n", a);
    printf("a = %d\n", *p);
    printf("a = %d\n", **q);
    printf("a = %d\n", ***r);
    printf("Address of q = %p   %p\n",&q, r);
    printf("Address of p = %p    %p\n",&p, q);





    return 0;
}