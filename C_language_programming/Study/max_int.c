#include <stdio.h>

int main()
{
    unsigned int a = 0,b = 0;
    while(++a > 0);
    printf("int的最大数是：%d\n",a - 1);
    while(a != 0)
    {
        a /= 10;
        b++;
    }
    printf("int的位数是：%d\n",b);
    return 0;
}