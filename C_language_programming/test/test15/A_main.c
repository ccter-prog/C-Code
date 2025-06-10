#include <stdio.h>
#include "A.h"

int main(void)
{
    A a;
    printf("a = %p\n", &a);
    f(&a);
    init(&a);
    return 0;
}