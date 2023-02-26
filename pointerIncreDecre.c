#include <stdio.h>

int main(void)
{
    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;

    p = a;

    printf("%d   %d   %d\n", (*p)++, *p++, *++p);
    printf("%d\n", *p);

    return 0;
}