#include <stdio.h>

void fudianyinfu(double yinfu);
void fufudianyinfu(double yinfu);

int main()
{
    double yinfu;
    int xuanze;
    while(1)
    {
        printf("1.计算附点音符 2. 计算复附点音符：");
        scanf("%d",&xuanze);
        if(xuanze == 1)
        {
            printf("请输入音符的拍子：");
            while(getchar() != '\n');
            scanf("%lf",&yinfu);
            fudianyinfu(yinfu);
        }
        else if(xuanze == 2)
        {
            printf("请输入音符的拍子：");
            while(getchar() != '\n');
            scanf("%lf",&yinfu);
            fufudianyinfu(yinfu);
        }
        else
        {
            printf("退出\n");
            break;
        }
    }
    return 0;
}

void fudianyinfu(double yinfu)
{
    double fudian = yinfu / 2;
    yinfu += fudian;
    printf("音符加上附点后的拍子：%.2lf\n",yinfu);
}

void fufudianyinfu(double yinfu)
{
    double fudian = yinfu / 2;
    double fufudian = fudian / 2;
    yinfu = yinfu + fudian + fufudian;
    printf("音符加上附点后的拍子：%.2lf\n",yinfu);
}