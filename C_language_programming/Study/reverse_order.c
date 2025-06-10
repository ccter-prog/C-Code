#include <stdio.h>

int main()
{
    int x;
    int digit = 0,ret = 0;
    scanf("%d",&x);
    while(x > 0)
    {
        digit = x % 10;
        printf("%d",digit);
        //ret = ret * 10 + digit;
        //printf("%d",ret);
        x /= 10;
    }
    return 0;
}