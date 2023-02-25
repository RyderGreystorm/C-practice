#include <stdio.h>

int main(void)
{
    int arr[5] = {0, 1, -1, 10, 1};
    int *p = &arr[0];

    printf("value of p = %d\n", *p);
    p+=2;

    printf("value of p = %d\n", *p);

    p = &arr[1];
    int *q= &arr[3];
    
//NOt possible
    // printf("%d\n", *p + *q);

    printf("%d\n", *p - *q);
    return 0;
}