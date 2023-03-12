#include <stdio.h>

/**
 * main - entry level of the application
 * @argc: params that counts the number of inputs passed on the command line
 * @argv: pointer string
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char **argv)
{
    printf("%s\n", argv[0]);
    return (0);
}