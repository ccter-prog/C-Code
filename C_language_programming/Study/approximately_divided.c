#include <stdio.h>

int main()
{
    int dividend,divisor;   //第一个是分子，第二个是分母
    scanf("%d/%d",&dividend,&divisor);
    int a = dividend,b = divisor,t;
    while(b > 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    printf("%d/%d\n",dividend / a,divisor / a);
    return 0;
}