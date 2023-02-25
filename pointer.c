#include <stdio.h>


int main(void)
{
    int a = 10, b = 9;
    int *p, *q;

    p = &a;
    q = &b;

    printf(" value of a using a is: %d\n", a);
    printf("value of a using pointer is: %d\n", *p);
    printf("address of a is: %p\n", &a);
    printf("address of a using pointer is: %p\n", p);
}

