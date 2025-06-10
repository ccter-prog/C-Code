#include <stdio.h>

int main()
{
    int i, j;
    int sum = 0;
    for(i = 1;i <= 9;i++)
    {
        for(j = 1;j <= i;j++)
        {
            sum = i * j;
            if(sum >= 10)
            {
                printf("%d*%d=%d  ", j, i, sum);
            }
            else
            {
                printf("%d*%d=%d   ", j, i, sum);
            }
        }
        printf("\n");
    }
    return 0;
}

// int main()
// {
//     int i, j;   //定义乘数和被乘数
//     int sum = 0;    //定义乘积
//     for(i = 1;i <= 9;i++)
//     {
//         for(j = i;j <= 9;j++)   //因为不能每次循环都让j从1开始，否则就会出现重复
//         {
//             sum = i * j;
//             if(sum >= 10)
//             {
//                 printf("%d*%d=%d  ", i, j, sum);
//             }
//             else
//             {
//                 printf("%d*%d=%d   ", i, j, sum);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }