#include <stdio.h>

int main()
{
    int hour,minute,add;
    printf("请输入时：");
    scanf("%d",&hour);
    printf("请输入分：");
    scanf("%d",&minute);
    printf("增加之前：%d时,%d分\n",hour,minute);
    printf("请输入要增加的时间（分）：");
    scanf("%d",&add);
    minute = minute + add;
    while(minute >= 60)
    {
        ++hour;
        if(hour >= 24)
        {
            hour = hour - 24;
        }
        minute = minute - 60;
    }
    printf("增加之后：%d时,%d分\n",hour,minute);
    return 0;
}