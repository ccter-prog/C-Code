#include <stdio.h>

int main()
{
    int cm;
    scanf("%d",&cm);
    int foot = cm / 30.48;  //英尺
    int inch = ((cm / 30.48) - foot) * 12;   //英寸
    printf("英尺是：%d,英寸是%d\n",foot,inch);
    return 0;
}