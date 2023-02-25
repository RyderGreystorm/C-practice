#include <stdio.h>

int main(void)
{
    int a[] = {0, 1, -1, 10, 1};
    int *p = &a[0];
    int *q = &a[4];
    int d = p - q;

    printf("%d\n", d);
    *q = 25;
    printf("%d\n", d);
    *p = 27;
    printf("%d\n", d);

    return 0;
}