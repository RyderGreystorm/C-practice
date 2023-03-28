#include <stdio.h>
#include <stdlib.h>


void add(int a , int b)
{
    printf("Addition is %d \n", a + b);
}

void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a - b);
}

void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a * b);
}

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main(void)
{
    void (*fn_ptr_arr[])(int, int) = {add, subtract, multiply};
    unsigned int ch, a = 15, b = 10;

    // printf("Enter a choise: 0 for add, 1 for subtract, 2 for multiply");
    // scanf("%d", &ch);

    if (ch > 2)
        return 0;
    (*fn_ptr_arr[ch])(a, b);

    int arr [] = {10, 5, 15, 12, 90, 80};
    int n = sizeof(arr)/sizeof(arr[0]), i;

    qsort(arr, n, sizeof(int), compare);

    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    

    return 0;
}