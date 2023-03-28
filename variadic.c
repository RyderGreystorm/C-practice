#include <stdio.h>
#include <stdarg.h>

int add(int args, ...);

int main(void)
{
    printf("Addition 1 = %d\n", add(7, 20, 30, 70, 10, 30, 50, 90));
    printf("Addition 2 = %d\n", add(4, 10, 30, 50, 90));
    printf("Addition 3 = %d\n", add(2, 50, 90));


    return 0;
}

int add(int args, ...)
{
    if (args == 0)
        return 0;
    va_list list;

    va_start(list, args);

    int i, sum = 0;

    for (i = 0; i < args; i++)
    {
        sum += va_arg(list, int);
    }

    va_end(list);

    return sum;
}