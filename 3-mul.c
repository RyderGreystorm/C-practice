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
    int sum , num1, num2;
    if (argc != 3)
        return printf("Error\n");
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    sum = num1 * num2;

    printf("%d\n", sum);

    return (0);
}