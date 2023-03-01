#include <stdio.h>
#include <string.h>

char *leet(char *str);
int main(void)
{
     char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);

    return 0;
}
char *leet(char *str)
{
    int i,j;
    char s1[] = "aAeEoOtTlL";
    char s2[] = "4433007711";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (str[i] == s1[j])
                str[i] = s2[j];
        }
    }
    return str;
}