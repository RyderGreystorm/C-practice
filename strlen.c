#include <stdio.h>
#include <string.h>

int _strlen(char *s);

int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return 0;
}

int _strlen(char *s){      
    return (strlen(s));

}