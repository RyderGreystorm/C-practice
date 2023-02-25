#include <stdio.h>

int main(void)
{
    int a = 10, b= 5;
    int *p, *q;
    p = &a;
    q = p;
    q = &b;

    printf("a = %d  %d  %d \n", a, *p, *q);
    return 0;
}