#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *string_toupper(char *str);

int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}

char *string_toupper(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    


    return str;
}