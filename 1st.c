#include "main.h"

int main(void)
{
    char* str = " This is the texts added tp the string";
    printf("%ld\n", strlen(str));
    int y = printf(" This is the texts added tp the string %s",str );
    printf(" %d\n", y); 
    return 0; 
}

int _printf(const char *format, ...)
{

}