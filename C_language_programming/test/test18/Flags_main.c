#include <stdio.h>
#include "Flags.h"

int main(void)
{
    Flags a = {.read = 1, .write = 1, .execute = 0, };
    printf("read = %u\n", a.read);
    printf("write = %u\n", a.write);
    printf("execute = %u\n", a.execute);
    printf("reserved = %u\n", a.reserved);
    return 0;
}