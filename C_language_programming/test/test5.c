#include <stdio.h>

void pingjunshu(void);

int main()
{
    pingjunshu();
    return 0;
}

void pingjunshu()
{
    int x;
    int cnt;
    printf("请输入你要输入的数量：");
    scanf("%d",&cnt);
    int number[cnt];
    int sum = 0;
    for(int i = 0;i < cnt;i++)
    {
        printf("请输入数字：");
        scanf("%d",&x);
        number[i] = x;
        sum += x;
        while(getchar() != '\n');
    }
    double pingjunshu = sum / 2.0;
    printf("它们的和是：%d,它们的平均数是：%f\n",sum,pingjunshu);
    int test = 0;
    for(int i = 0;i < cnt;i++)
    {
        if(number[i] > (int)pingjunshu)
        {
            printf("你输入的数中，比它大的有：%d\n",number[i]);
            test = 1;
        }
    }
    if(test == 0)
    {
        printf("你输入的数中没有比%f还大的数了\n",pingjunshu);
    }
}