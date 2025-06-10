#include <stdio.h>

int main()
{
    int left = 0,right = 100;
    int num,num2;
    printf("请输入0~100的数：");
    scanf("%d",&num);
    while(left <= right)
    {
        num2 = (left + right) / 2;
        if(num2 > num)
        {
            right = num2 - 1;
        }
        else if(num2 < num)
        {
            left = num2 + 1;
        }
        else
        {
            printf("找到了，你输入的数字是：%d\n",num2);
            break;
        }
    }
    if(num2 != num)
    {
        printf("抱歉，没找到你输入的数字\n");
    }
    return 0;
}