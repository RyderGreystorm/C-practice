#include <stdio.h>

char *_strchr(char *s, char c);

int main(void)
{

    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return 0;
}
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return (char *) s;
        s++;
    }
}