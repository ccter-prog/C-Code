#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void caidan(void);


void ai_play()
{
    srand(time(0));
    printf("请输入1-100的数：");
    int num;
    scanf("%d",&num);
    int left = 0;
    int right = 100;
    int mid;
    int count = 0;
    int test = 1;
s:
    while(left <= right)
    {
        mid = (left + right) / 2;
        printf("猜：%d\n",mid);
        if(mid > num)
        {
            right = mid - 1;
            count++;
        }
        else if(mid < num)
        {
            left = mid + 1;
            count++;
        }
        else if(mid == num)
        {
            count++;
            printf("一共用了%d次\n",count);
            break;
        }
    }
    if(left > right && mid != num)
    {
        if(test == 1)
        {
            left = 10;
            right = 100;
            test = 0;
        }
        left *= 10;
        right *= 10;
        goto s;
    }
    char xuanze;
    while(getchar() != '\n');
    printf("是否继续游戏？（继续请输入y，退出请输入n）：");
    scanf("%c",&xuanze);
    if(xuanze == 'y')
    {
        ai_play();
    }
    else
    {
        printf("退出，正在返回菜单……\n");
        caidan();
    }
}

void play()
{
    srand(time(0));
    int num = rand() % 100;
    int nandu;
    printf("请选择难度:：1.有提示 2.无提示\n");
    scanf("%d",&nandu);
    if(nandu == 1)
    {
        int i,num2;
        for(i = 5;i > 0;i--)
        {
            if(i < 4)
            {
                printf("你还有%d次机会\n",i);
            }
            printf("请输入一个1-100的数：");
            scanf("%d",&num2);
            if(num2 > num)
            {
                printf("大了\n");
            }
            else if(num2 < num)
            {
                printf("小了\n");
            }
            else
            {
                printf("恭喜你猜对了\n");
                break;
            }
        }
        if(i == 0 && num2 != num)
        {
            printf("很遗憾,你没有猜对\n正确答案是：%d\n",num);
        }
        char xuanze2;
        while(getchar() != '\n');
        printf("是否继续游戏？（继续请输入y,退出请输入n）：");
        scanf("%c",&xuanze2);
        if(xuanze2 == 'y')
        {
            play();
        }
        else
        {
            printf("退出，正在返回菜单……\n");
            caidan();
        }
    }
}

void caidan()
{
    printf("欢迎体验猜数字游戏\n1.play 2.ai_play 3.exit\n请选择：");
    int xuanze;
    scanf("%d",&xuanze);
    switch(xuanze)
    {
        case 1:
            play();
            break;
        case 2:
            ai_play();
            break;
        case 3:
            printf("退出游戏\n");
            break;
    }

}

int main()
{
    caidan();
    return 0;
}