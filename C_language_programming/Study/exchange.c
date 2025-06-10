#include <stdio.h>

int main()
{
    int a = 5,b = 6,test;
    printf("a = %d,b = %d\n",a,b);
    test = a;
    a = b;
    b = test;
    printf("a = %d,b = %d\n",a,b);
    return 0;
}