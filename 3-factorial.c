#include <stdio.h>
int factorial(int n);

int main(void)
{

    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return 0;
}

int factorial(int n)
{
    if (n < 0)
        return (-1);
    if (n <= 1)
        return (1);
    else
        return ( n * factorial(n - 1));
}