#include <stdio.h>
#include "A.h"

void init(A *a)
{
    a -> i = 10;
    a -> j = 20;
}

void static sum(A *a)
{
    printf("i + j = %d\n", a -> i + a -> j);
}

int main(void)
{
    A a;
    init(&a);
    sum(&a);
    return 0;
}