#include <stdio.h>


int main(void)
{
    int arr[] = {34, 56, 54, 32, 67, 89, 90, 32, 21};

    for (int i = (sizeof(arr)/sizeof(arr[1])) - 1 ; i >= 0; i--){
       
        printf("%d, ", arr[i]);
    }
    printf("\n");
    return 0;
}