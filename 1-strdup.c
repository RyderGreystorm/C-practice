#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str);

int main(void)
{

    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

char *_strdup(char *str)
{
    char *ptr;
    int i;

    if (str == NULL)
        return (NULL);
    
    ptr = (char *) malloc(strlen(str));

    if (ptr == NULL)
        return (NULL);
    
    for (i = 0; str[i] != '\0'; i++)
        ptr[i] = str[i];

    return (ptr);
    free(ptr);
    ptr = NULL;
}