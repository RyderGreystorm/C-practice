#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

void simple_print_buffer(char *buffer, unsigned int size)
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
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{   
    void* ptr1;
    
       ptr1 = realloc(ptr, new_size);
       if (ptr1 == NULL)
        return malloc(new_size);
        
        if (new_size > old_size)
                ptr1 = ptr;
        if (new_size == old_size)
            return ptr;  
        if (new_size == 0 && ptr1 != NULL)
        {
            free(ptr);
            return NULL;
        }

        return ptr1;

        free(ptr1);
}
