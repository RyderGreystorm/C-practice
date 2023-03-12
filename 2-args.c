#include <stdio.h>
#include <ctype.h>

/**
 * main - entry level of the application
 * @argc: params that counts the number of inputs passed on the command line
 * @argv: pointer string
 * Return: 0 for success
 */

int main(int argc , char **argv )
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return (0);
}