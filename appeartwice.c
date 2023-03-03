#include <stdio.h>
#include <string.h>


int main(void)
{
    int input = 68278;
    int arr[10] = {0};
    int i;

    while(input > 0){
        i = input % 10;
        if (arr[i] == 1)
            break;
        
        arr[i] = 1;
        input = input / 10;
    }

    if (input > 0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}