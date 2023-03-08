#include <stdio.h>
#include <string.h>
int is_palindrome(char *s);
int main(void)
{
      int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return 0;
}

// int is_palindrome(char *s)
// {
//     int low = 0, x, high = (strlen(s) - 1);

//     while (high > low)
//     {
//         if (s[low++] != s[high--])
//             return (x = 0);
//     }
//     return (1);
// }

int is_palindrome(char *s)
{       
        int low = 0, high = (strlen(s) - 1), x;

        while (high > low)
        {
                if (s[low++] != s[high--])
                        return (x = 0);
        }
        return (x = 1);
}       
     