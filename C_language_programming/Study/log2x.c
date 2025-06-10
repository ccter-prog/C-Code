#include <stdio.h>

int main()
{
    int x,x1,y,ret = 0;
    printf("请输入y的值：");
s:
    scanf("%d",&y);
    if(y <= 1)
    {
        printf("y的值不能小于等于1,请重新输入！\n");
        goto s;
    }
    printf("请输入x的值：");
    scanf("%d",&x);
    x1 = x;
    while(x1 > 1)
    {
        x1 /= 2;
        ret++;
    }
    printf("log%d %d = %d\n",y,x,ret);
    return 0;
}