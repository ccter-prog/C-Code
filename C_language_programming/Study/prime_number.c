#include <stdio.h>

int main()
{
    const int MAXNUMBER = 25;
    int prime[MAXNUMBER];
    for(int i = 0;i < MAXNUMBER;i++)
    {
        prime[i] = 1;
    }
    for(int x = 2;x < MAXNUMBER;x++)
    {
        if(prime[x])
        {
            for(int i = 2;i * x < MAXNUMBER;i++)
            {
                prime[i * x] = 0;
            }
        }
    }
    int cnt = 0;
    for(int i = 0;i < MAXNUMBER;i++)
    {
        printf("%d ",prime[i]);
        cnt++;
        if(cnt == 10)
        {
            printf("\n");
            cnt = 0;
        }
    }
    return 0;
}

// int isPrime(int x,int prime[],int count);

// int main()
// {
//     const int NUMBER = 10;
//     int prime[NUMBER] = {2};
//     int count = 1;
//     for(int i = 3;i < NUMBER;i++)
//     {
//         if(isPrime(i,prime,count))
//         {
//             prime[count++] = i;
//         }
//     }
//     int cnt = 0;
//     for(int i = 0;i < NUMBER;i++)
//     {
//         printf("%d ",prime[i]);
//         cnt++;
//         if(cnt == 5)
//         {
//             printf("\n");
//         }
//     }
//     return 0;
// }

// int isPrime(int x,int prime[],int count)
// {
//     int ret = 1;
//     for(int i = 0;i < count;i++)
//     {
//         if(x % prime[i] == 0)
//         {
//             ret = 0;
//             break;
//         }
//     }
//     return ret;
// }