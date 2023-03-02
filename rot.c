#include <stdio.h>
char *rot13(char *str);

int main(void)
{


    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return 0;
}

char *rot13(char *str)
{
    int i, j;
    char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char ss[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 52; j++)
        {
            if(str[i] == s[j])
            {str[i] = ss[j];
            break;
            }
        }
    }
    return str;

}