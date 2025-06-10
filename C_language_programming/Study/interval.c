#include <stdio.h>

int main()
{
    int hour1,minute1,hour2,minute2;
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    int ih,im;
    if(hour1 > hour2)
    {
        ih = hour1 - hour2;
        im = minute1 - minute2;
    }
    else if(hour2 > hour1)
    {
        ih = hour2 - hour1;
        im = minute2 - minute1;
    }
    else
    {
        ih = hour1 - hour2;
        im = minute1 - minute2;
    }
    if(im < 0)
    {
        im = 60 + im;
        ih--;
    }
    printf("时差是%d小时%d分\n",ih,im);
    return 0;
}