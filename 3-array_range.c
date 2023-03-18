#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max);

void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}

int *array_range(int min, int max)
{
    int i;
    int *ptr;
    int size;

    if (min > max)
        return NULL;

    size = max - min + 1;
    ptr = malloc(sizeof(int) * max);

    if (ptr == NULL)
        return NULL;

    for (i = min; i < max; i++)
    {
    ptr[i]= i;
    }
    return ptr;
}
