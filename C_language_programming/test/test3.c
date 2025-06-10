#include <stdio.h>

int main() 
{

    int price = 1234;  // 假设这是一个以分为单位的价格
    int taxRate = 100; // 假设税率为10%，以百分数表示
    int total = price + (price * taxRate / 100); // 加上10%的税

    // 转换为元和小数形式输出
    int dollars = total / 100;
    int cents = total % 100;
    printf("Total price with tax: %d.%02d\n", dollars, cents);

    return 0;
}

// int main()
// {
//     const int NUMBER = 10;
//     int x;
//     int count[NUMBER];
//     for(int i = 0;i < NUMBER;i++)
//     {
//         count[i] = 0;
//     }
//     do
//     {
//         printf("请输入数字(0~9,exit:-1)：");
//         scanf("%d",&x);
//         if(x < 0 || x > 9)
//         {
//             printf("只能输入0～9的数字，请重新输入\n");
//             continue;
//         }
//         count[x]++;
//     } while (x != -1);
//     for(int i = 0;i < NUMBER;i++)
//     {
//         printf("%d出现了%d次\n",i,count[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char a = '0';
//     char arr[60];
//     for(int i = 0;i < 60;i++)
//     {
//         arr[i] = '0';
//         printf("%c",arr[i]);
//     }
//     printf("\n");
//     arr[a] = '1';
//     for(int i = 0;i < 60;i++)
//     {
//         printf("%c",arr[i]);
//     }
//     return 0;
// }