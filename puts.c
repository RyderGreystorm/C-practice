#include <stdio.h>

void _puts(char *str);

int main(void)
{
      char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return 0;
}

void _puts(char *str)
{       
        puts(str);
}       
