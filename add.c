#include <stdio.h>
#include <ctype.h>

int _isupper(int c);


int main(void)
{
int test;
test = _isupper('a');
printf("%d\n", test);
test = _isupper('A');
printf("%d\n", test);
    return 0;
}


int _isupper(int c)
{
    if (isupper(c))
        return 1;
    else
        return 0;
}