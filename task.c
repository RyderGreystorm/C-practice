#include <stdio.h>
#include <stdlib.h>

int *input(size_t n)
{   int i;
    int *ptr = (int *) malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("No memory avialable");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("PLease enter numbers: ");
        scanf("%d", ptr + i);
    }
    return ptr;
}

int main(void)
{   
    int i, *ptr, sum = 0;
    ptr = input(6);

    for (i = 0; i < 6; i++)
    {
        sum += *(ptr + i);
    }
    printf("%d\n", sum);
    return 0;
}