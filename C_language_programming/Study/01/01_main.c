#include <stdio.h>
#include <stdlib.h>
#include "01.c"

int main(int argc, char const *argv[])
{
    Array a = array_create(100);
    printf("%d\n", array_size(&a));
    *array_at(&a, 0) = 10;
    printf("%d\n", *array_at(&a, 0));
    int number;
    int cnt = 0;
    do
    {
        scanf("%d", &number);
        if(number != -1)
        {
            *array_at(&a, cnt++) = number;
        }
    } while (number != -1);
    array_free(&a);
    return 0;
}