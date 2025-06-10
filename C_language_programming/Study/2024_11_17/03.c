#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    printf("请输入一个数字：");
    scanf("%i", &number);
    unsigned mask = 1u << 31;
    for(;mask;mask >>= 1)
    {
        printf("%d", mask & number ? 1 : 0);
    }
    putchar('\n');
    return 0;
}