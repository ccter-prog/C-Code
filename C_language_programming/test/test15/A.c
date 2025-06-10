#include <stdio.h>
#include "A.h"

void f(A *p)
{
    p -> i = 20;
    p -> j = 10;
    printf("i = %p\n", &(p -> i));
    printf("j = %p\n", &(p -> j));
    printf("p = %p\n", p);
}

void init(A *p)
{
    p = NULL;
    printf("i = %d\n", p -> i);
    printf("j = %d\n", p -> j);
}