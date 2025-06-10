#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 20;
    //printf("%x\n", x & y);    按位与
    //printf("%x\n", x | y);    按位或
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("y = %d\n", y);
    printf("x = %d\n", x);
    return 0;
}