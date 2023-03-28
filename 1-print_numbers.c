#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...);
int main(void)
{
    print_numbers("", 4, 0, 98, -1024, 402);
    return (0);
}
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;

unsigned int i, x;
char *s;

if (separator == NULL)
   separator = NULL;
if (n == 0)
    printf("%d", 0);
;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
         x = va_arg(args, unsigned int);
        printf("%d",x);
        if (i != (n - 1))
            printf("%s", separator);

        
    }
    printf("\n");
        
}