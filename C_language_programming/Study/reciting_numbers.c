#include <stdio.h>

// int main()
// {
//     int num;
//     scanf("%d",&num);
//     if(num < 0)
//     {
//         printf("fu");
//         num *= -1;
//     }
//     int mask = 1;
//     int d = 0;
//     int i = 1;
//     int num2 = num;
//     int cnt = 0;
//     while(num2 > 0)
//     {
//         int t = num2 % 10;
//         num2 /= 10;
//         cnt++;
//     }
//     while(cnt > 0)
//     {
//         cnt--;
//         mask *= 10;
//     }
//     do
//     {
//         d = num / mask;
//         switch(d)
//         {
//             case 0:
//                 printf("ling ");
//                 break;
//             case 1:
//                 printf("yi ");
//                 break;
//             case 2:
//                 printf("er ");
//                 break;
//             case 3:
//                 printf("san ");
//                 break;
//             case 4:
//                 printf("si ");
//                 break;
//             case 5:
//                 printf("wu ");
//                 break;
//             case 6:
//                 printf("liu ");
//                 break;
//             case 7:
//                 printf("qi ");
//                 break;
//             case 8:
//                 printf("ba ");
//                 break;
//             case 9:
//                 printf("jiu ");
//                 break;
//         }
//         num %= mask;
//         mask /= 10;
//     } while (num > 0);
//     return 0;
// }

int main()
{
    int num;
    printf("输入100～999:");
    scanf("%d",&num);
    if(num < 0)
    {
        printf("\nfu");
        num *= -1;
    }
int n = 100;
    do
    {
        int num2 = num / n;
        switch(num2)
        {
            case 0:
                printf("ling");
                break;
            case 1:
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3:
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5:
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7:
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;
        }
        num %= n;
        n /= 10;
    } while (n >= 1);
    
    return 0;
}