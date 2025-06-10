#include <stdio.h>
#include <string.h>

#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))

int main(void)
{
    char arr[5];
    strcpy(arr, "abcd");
    int i = 0;
    printf("i = %d\n", i);
    putchar(TOUPPER(arr[++i]));
    printf("i = %d\n", i);
    putchar('\n');
    return 0;
}