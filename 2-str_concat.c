#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2);

int main(void)
{

    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);

}
char *str_concat(char *s1, char *s2)
{
    int i, len1, len2;
    char *ptr;

   
    if (s1 == NULL)
        return (NULL);
    
    if (s2 == NULL)
        return NULL;
    
    len1 = strlen(s1);
    len2 = strlen(s2);

    ptr = (char *) malloc(sizeof(char) * (len1 + len2 + 1));

    for (i = 0; i < len1; i++)
        ptr[i] = s1[i];
        
    for (int j = 0; j <len2 ; j++)
        ptr[len1 + j] = s2[j];
    
    
    ptr[len1 + len2] = '\0';
    return ptr;
}
