#include <stdio.h>
int actual_prime(int n, int i);
int is_prime_number(int n);
int main(void)
{

}

int is_prime_number(int n){
    if (n <= 1)
        return (0);
    return (actual_prime(n, n - 1));
}


