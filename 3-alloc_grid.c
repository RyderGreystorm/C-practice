#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int **alloc_grid(int width, int height);

void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}
int main(void)
{
     int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);

    return 0;
}

// int **alloc_grid(int width, int height)
// {
// 	int **ptr, i, j;

//     if (width <= 0 || height <= 0)
//         return NULL;
//     ptr = (int **) malloc(sizeof(int *) * height);

//     if (ptr == NULL)
//         return NULL;
//     for (i = 0; i < height; i++)
//     {
//         ptr[i] = (int *) malloc(sizeof(int) * width);

//         if (ptr[i] == NULL)
//         {
//             free(ptr);
//         for (j = 0; j <= i; j++)
//             free(ptr[j]);
//         return NULL;
//         }
//     }
//     for (i = 0; i < height; i++)
//     {
//         for ( j = 0; j < width; j++)
//         {
//             ptr[i][j] = 0;
//         }
//     }
//     return ptr;
    
// }

int **alloc_grid(int width, int height)
{
        int i, j, **ptr;

        if (width <= 0 || height <= 0)
                return (NULL);

        ptr = (int **) malloc(sizeof(int *) * height);

        if (ptr == NULL)
                return (NULL);

        for (i = 0; i < height; i++)
        {
                ptr[i] = (int *) malloc(sizeof(int) * width);

                if (ptr[i] == NULL)
                {
                        free(ptr);
                for (j = 0; j <= i; j++)
                        free(ptr[j]);
                return (NULL);
                }
        }
        for (i = 0; i < height; i++)
        {
                for (j = 0; j < width; j++)
                {
                     ptr[i][j] = 0;
                }

        }
        return (ptr);

        // free(ptr);
        // ptr = NULL;
}
    