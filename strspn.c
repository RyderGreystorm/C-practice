#include <stdio.h>
#include <string.h>
#include <stdbool.h>

unsigned int _strspn(char *s, char *accept);

int main(void)
{
 char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return 0;
}

unsigned int _strspn(char *s, char *accept)
{
    size_t i, j, len1, len2;
    size_t count = 0;
    bool found = false;

    len1 = strlen(s);
    len2 = strlen(accept);

    for (i = 0; i < len1; i++){
        for (j = 0; j < len2; j++)
            if (accept[j] == s[i]){
                found = true;
                break;
            }
        if (!found)
            break;
        else
            count++;

    }
return count;
    
    // size_t count = strspn(s, accept);
    // return count;
}