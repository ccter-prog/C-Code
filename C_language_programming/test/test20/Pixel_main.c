#include <stdio.h>
#include "Pixel.h"

int main(void)
{
    // Pixel pixel[3];
    // for(int i = 0;i < 3;i++)
    // {
    //     printf("请输入值：");
    //     scanf("%d", &pixel[i].colour);
    // }
    Pixel a;
    for(int i = 0;i < 3;i++)
    {
        printf("请输入：");
        scanf("%d", &a.arr[i]);
    }
    return 0;
}