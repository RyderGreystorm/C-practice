#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    /**allocating memory for the programme*/
    int *ptr = (int *) malloc(2 * sizeof(int));

    /**check if memory is available*/
    if (ptr == NULL)
    {
        printf("Memory not available");
        exit(1);
    }

    /**collect integers now*/
    for (i = 0; i < 2; i++)
    {
        printf("PLease enter numbers: ");
        scanf("%d", ptr + i);
    }

    /**Create more memory to take 2 more integers*/

    ptr = (int *) realloc(ptr, 4 * sizeof(int));
    /**check if new memory size is available*/
    if(ptr ==NULL)
    {
        printf("No memory available");
        exit (1);
    }
    /**if memory is available then let us collect the info from the user*/

    for (i = 2; i < 4; i++)
    {
        printf("PLease enter extra numbers: ");
        scanf("%d", ptr + i);
    }

    /**Display all numbers collected from the user*/
    for (i = 0; i < 4; i++)
        printf("%d ", *(ptr + i));
    
    free(ptr);
    ptr = NULL;
    return 0;
}