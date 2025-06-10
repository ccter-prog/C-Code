#include <stdio.h>

/*
水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身
*/

// int main()
// {
//     int n = 3;
//     int first = 1;
//     int i = 1;
//     while(i < n)
//     {
//         first *= 10;
//         i++;
//     }
//     i = first;
//     while(i < first * 10)
//     {
//         int t = i;
//         int sum = 0;
//         do
//         {
//             int d = t % 10;
//             t /= 10;
//             int p = d;
//             int j = 1;
//             while(j < n)
//             {
//                 p *= d;
//                 j++;
//             }
//         sum += p;
//         } while(t > 0);
//         if(sum == i)
//         {
//             printf("%d ",i);
//         }
//         i++;
//     }
//     return 0;
// }

int main() 
{
    int n;
    scanf("%d",&n);
    int first = 1;  //获取多少位
    int i = 1;
    while(i < n)
    {
        first *= 10;
        i++;
    }
    i = first;  //此时的first是循环的开始，所以让i = first
    while(i < first * 10)   //因为first是循环的开始，所以让first * 10 变成终点
    {
        int t = i;  
        int sum = 0;
        while(t > 0)
        {
            int d = t % 10; //获取i的最后一位
            t /= 10;    //去掉i的最后一位
            int p = d;
            int j = 1;
            while(j < n)
            {
                p *= d;
                j++;
            }
            sum += p;
        }
        if(sum == i)
        {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}