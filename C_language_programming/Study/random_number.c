#include <stdio.h>

int main()
{
    int num = 32;  //让程序猜的数
    int i = 0;
    int test = num;
    int count = 1;
    while(test > 0)    //算出猜的数有几位
    {
        i++;
        if(i == 100)
        {
            test -= 100;
            count++;
            i = 0;
        }
    }
    i = 1;
    int d = 1;
    while(i < count)
    {
        d *= 10;
        i++;
    }
    int right = 0,lift = d * 10;    //从0到4位数
    count = 4;  //猜的机会
    do
    {
        int average = (right + lift) / 2;   //生成平均数
        int number = average;   //猜的数
        if(number < num)
        {
            right = number + 1;
            count--;
            printf("Too small\n");
        }
        else if(number > num)
        {
            lift = number - 1;
            count--;
            printf("Too big\n");
        }
        else
        {
            printf("Bingo\n");
            count = 0;
        }
    } while (count != 0);
    if(right > lift)
    {
        printf("Game Over\n");
    }
    return 0;
}