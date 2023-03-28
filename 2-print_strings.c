#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...);
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list string;

    unsigned int i;
    char *s;
    if (separator == NULL)
            separator = NULL;

    va_start(string, n);

    for (i = 0; i < n; i++)
    {
        s = va_arg(string, char*);
        if (s == NULL)
            s = "(nil)";
        printf("%s", s);

        if (i != (n - 1) && separator != NULL)
            printf("%s", separator);

    }
    printf("\n");

    va_end(string);
}