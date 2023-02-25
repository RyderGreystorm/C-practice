#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverseWords(const char* text);
int main(void)
{
    reverseWords("");
    return 0;
}

char* reverseWords(const char* text) {

    printf("Please enter words: ");
    fgets(text, 20, stdin);
    printf("%s", strrev(text));
    return text;

}