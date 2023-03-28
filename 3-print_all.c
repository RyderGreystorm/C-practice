#include <stdio.h>
#include <stdarg.h>
#include <string.h>
void print_all(const char * const format, ...);

int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}

void print_all(const char * const format, ...)
{
    va_list args;

    char c;
    int i, len, d = 0;
    float f;
    char *s, *sep;

    va_start(args, format);
    len = strlen(format);
    sep = " ";

    while(format[d])
    {
        if (format[d] == 'c')
        {
            c = va_arg(args, int);
            printf("%c%s", c, sep);
        }
        else if (format[d] == 'i')
        {
            i = va_arg(args, int);
            printf("%i%s", i, sep);
        }
       else if (format[d] == 'f')
        {
            f = va_arg(args, double);
            printf("%f%s", f, sep);
        }
       else if (format[d] == 's')
        {
            s = va_arg(args, char *);
            if (!s)
                s = "(nil)";
            printf("%s%s", s, sep);
        }
        sep = ",";
        d++;
    }

    printf("\n");
    va_end(args);

}