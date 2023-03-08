#include <stdio.h>
int _strlen_recursion(char *s);

int main(void)
{
 int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return 0;
}
int _strlen_recursion(char *s)
{
    int sum;
    if (*s == '\0')
        return 0;
    
   s++;
    return(1 + _strlen_recursion(s)); 

    
}