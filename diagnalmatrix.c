#include <stdio.h>

/**
 * print_diagsums - prints diagonals of a matrix
 * @a: array of matrix
 * @size: size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size);

int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
void print_diagsums(int *a, int size)
{
        // int i, j, sum = 0, sum1 = 0;

        // for (i = 0; i < size; i++)
        // {
        //         for (j = 0; j < size; j++)
        //         {
        //                 if (i == j)
        //                 sum = sum + a[i][j];
        //         }
        // }

        // for (i == 0; i < size; i++)
        // {
        //         for (j = 0; j < size; j++)
        //         {
        //                 if (i + j == (size - 1));
        //                 sum1 = sum1 + a[j * size +j];
        //         }
        // }
        // printf("%d, ", sum);
        // printf("%d\n", sum1);

        	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}


