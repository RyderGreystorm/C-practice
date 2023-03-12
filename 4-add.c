#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - entry level of the application
 * @argc: params that counts the number of inputs passed on the command line
 * @argv: pointer string
 * Return: 0 for success
 */

int main(int argc , char **argv )
{
    int i, sum = 0;
 if (argc = 0)
    return 0;
for (i = 0; i < argc; i++)
{
    if (argv[i] >=! 48 && argv[i] <=! 57)
    return printf("Error\n");
else
    return sum += atoi(argv[i]);
} 

    return (0);
}