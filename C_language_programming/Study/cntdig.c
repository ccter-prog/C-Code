#include <stdio.h>

int main()
{
    int x;
    int n = 0;
    scanf("%d",&x);
    do
    {
        x /= 10;
        n++;
    } while(x > 0);
    printf("n = %d\n",n);
    // int x,n = 1;
    // printf("请输入要判断的数字：");
    // scanf("%d",&x);
    // if(x > 999)
    // {
    //     n = 4;
    // }
    // else if(x > 99)
    // {
    //     n = 3;
    // }
    // else if(x > 9)
    // {
    //     n = 2;
    // }
    // else
    // {
    //     n = 1;
    // }
    // printf("这是一个%d位数\n",n);
    return 0;
}