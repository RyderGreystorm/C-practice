#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n;

    printf("Enter the number of integers: ");
    scanf("%d", &n); /*Getting the number of inegers the user want to enter*/
    int *ptr = (int *)malloc(n * sizeof(int)); /* allocating memory for the data to be entered and storing the memory address into a pointer*/
    
    if (ptr == NULL)
    {
        printf("Memory not available");
        exit (1);
        }

        for (i = 0; i < n; i++)
        {
            printf("Please enter an integer: ");
            scanf("%d", ptr + i); /*loop to take number as input from the user and store it in the memory*/
        }

        for (i = 0; i < n; i++)
            printf("%d ", *(ptr + i));
        printf("\n");

        free(ptr);
        ptr = NULL;
    return 0;
}