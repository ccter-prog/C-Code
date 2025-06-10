#include <stdio.h>

int main()
{
    int x;
    int d = 0;
    int mask = 1;
    printf("请输入要进行分解的数：");
    scanf("%d",&x);
    int x2 = x;
    while(x2 > 9)
    {
        x2 /= 10;
        mask *= 10;
    }
    //printf("mask = %d\n",mask);
    do
    {
        d = x / mask;
        printf("%d",d);
        if(x >= 10)
        {
            printf(" ");
        }
        x %= mask;
        mask /= 10;
    } while(x > 0);
    
    return 0;
}