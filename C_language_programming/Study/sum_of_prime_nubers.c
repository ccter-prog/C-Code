#include <stdio.h>

/*
统计整数m和n之间内素数的个数并求和
*/
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    // if(m == 1)
    // {
    //     m = 2;
    // }
    int cnt = 0;    //计数器
    int sum = 0;    //和
    for(int i = m;i <= n;i++)
    {
        int j;  //下面循环的控制变量
        for(j = 2;j < i;j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if(i == j)
        {
            cnt++;
            sum += i;
        }
    }
    printf("素数的个数是：%d,和是%d\n",cnt,sum);
    return 0;
}