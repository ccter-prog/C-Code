#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
stop:
    srand(time(0));
    int number = rand() % 100;
    int count = 0,count2 = 5;
    int num;
    printf("我已经想好了一个数，来猜猜看:");
    do
    {
        scanf("%d",&num);
        if(num > number)
        {
            printf("大了\n");
        }
        else if(num < number)
        {
            printf("小了\n");
        }
        else
        {
            goto endd;
        }
        count++;
        count2--;
        if(count2 == 0)
        {
            char arr[] = "";
            printf("游戏结束，是否重新开始：");
            scanf("%s",arr);
            if(strcmp(arr,"是") == 0)
            {
                goto stop;
            }
            else
            {
                break;
            }
        }
        printf("还剩%d次机会\n",count2);
    } while(num != number);
endd:
    if(num == number)
    {
        printf("恭喜你猜对了，一共用了%d次\n",count);
    }
    return 0;
}