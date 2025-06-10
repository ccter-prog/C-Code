#include <stdio.h>

int main()
{
    int a,b,t;
    printf("请输入两个数：");
    scanf("%d %d",&a,&b);
    while(b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    printf("它们的最大公约数是：%d\n",a);
    return 0;
}

// int main()
// {
//     printf("请输入两个数：");
//     int x,n;
//     scanf("%d %d",&x,&n);
//     int count = 0;
//     int count2;
//     if(x > n)
//     {
//         count2 = x;
//     }
//     else
//     {
//         count2 = n;
//     }
//     for(int i = 1;i <= count2;i++)
//     {
//         if(x % i == 0 && n % i == 0)
//         {
//             count = i;
//         }
//     }
//     printf("它们的最大公约数是%d\n",count);
//     return 0;
//}