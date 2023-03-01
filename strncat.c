#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src);


int main(void)
{
     char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return 0;
}

char *_strcat(char *dest, char *src)
{
    int len, len1, i;
    
    len = strlen(dest);
    len1 = strlen(src);

    for (i = 0; i < len1; i++)
    {
        dest[len + i] = src[i];
    }
    return (dest);
}