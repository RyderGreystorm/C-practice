#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2, size_t n);

int main(void)
{

   char *concat;

    concat = str_concat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);

}
char *str_concat(char *s1, char *s2, size_t n)
{
    int i, len1;
    char *ptr;

   
    if (s1 == NULL)
        return (NULL);
    
    if (s2 == NULL)
        return NULL;
    
    len1 = strlen(s1);

    ptr = malloc(sizeof *ptr * (len1 + n + 1));

    for (i = 0; i < len1; i++)
        ptr[i] = s1[i];
        
    for (int j = 0; j < n ; j++)
        ptr[len1 + j] = s2[j];
    
    
    ptr[len1 + n] = '\0';
    return ptr;
}
