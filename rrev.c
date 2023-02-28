#include <stdio.h>
#include <string.h>

void print_rev(char *s);
int main(void)
{
 char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    
    return 0;
}

void print_rev(char *s)
{
    for (int i = strlen(s) - 1; i >= 0; i++){
        printf("%c", s[i]);
    }
}