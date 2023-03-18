#include <stdio.h>


int main(void)
{
    int i;
    int arr[10] = {0, 1};

    for (i = 0; i < 10; i++)
    {
        
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        printf("%d ", arr[i]);
    return 0;
}