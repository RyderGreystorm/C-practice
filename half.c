#include <stdio.h>
#include <string.h>

void puts_half(char *str);

int main(void)
{    char *str;

    str = "0123456789";
    puts_half(str);
    return 0;
}

void puts_half(char *str)
{
    int i, len, ln;
    len = strlen(str);
    ln = len/2;

    if (len % 2 == 1 ){
        ln = (ln) + (len - 1);
    }

    for (i = ln; i < len; i++){
        putchar(str[i]);
    }
    putchar('\n');
}