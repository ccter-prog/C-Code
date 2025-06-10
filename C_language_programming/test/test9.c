#include <stdio.h>
#include <stdbool.h>

struct point
{
    int x;
    int y;
};

struct rectangle
{
    struct point p1;
    struct point p2;
};

int main(int argc, char const *argv[])
{
    struct rectangle rects[4] = 
    {
        {{1, 3}, {32, 42}},
        {{3, 543}, {13,53}},
        {{0, 0}, {0, 0}},
        {{0, 0}, {0, 0}},
    };
    for(int i = 0;i < 4;i++)
    {
        printf("%d %d %d %d", rects[i].p1.x, rects[i].p1.y, rects[i].p2.x, rects[i].p2.y);
    }
    return 0;
}

// struct point
// {
//     int x;
//     int y;
// };

// struct rectangle
// {
//     struct point st1;
//     struct point st2;
// };

// int main(int argc, char const *argv[])
// {
//     struct rectangle b, *p;
//     p = &b;
//     scanf("%d", &p -> st1.x);
//     printf("%d\n", p -> st1.x);
//     return 0;
// }

// struct time
// {
//     int hour;
//     int minutes;
//     int seconds;
// };

// struct time timeUpdate(struct time now);

// int main(int argc, char const *argv[])
// {
//     struct time testTimes[3] = 
//     {
//         {11, 59, 59}, {12, 0, 0}, {1, 29, 59}
//     };
//     for(int i = 0;i < 3;i++)
//     {
//         printf("现在的时间是：%d时%d分%d秒\n", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
//         testTimes[i] = timeUpdate(testTimes[i]);
//         printf("下一秒是：%d时%d分%d秒\n", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
//     }
//     return 0;
// }

// struct time timeUpdate(struct time now)
// {
//     ++now.seconds;
//     if(now.seconds == 60)
//     {
//         now.seconds = 0;
//         now.minutes++;
//     }
//     if(now.minutes == 60)
//     {
//         now.minutes = 0;
//         now.hour++;
//     }
//     if(now.hour == 24)
//     {
//         now.hour = 0;
//     }
//     return now;
// }

// struct point
// {
//     int x;
//     int y;
// };

// struct point *get(struct point *p);
// void out(struct point i);
// void print(const struct point *p);

// int main(int argc, char const *argv[])
// {
//     struct point p = {0, 0};
//     print((get(&p)));
//     *get(&p) = (struct point){1, 3};
//     print(&p);
//     return 0;
// }

// struct point *get(struct point *p)
// {
//     printf("请输入x和y的值：");
//     scanf("%d %d", &p -> x, &p -> y);
//     return p;
// }

// void print(const struct point *p)
// {
//     printf("x = %d, y = %d\n", p -> x, p -> y);
// }

// void out(struct point p)
// {
//     printf("out输出：x = %d\n", p.x);
//     printf("out输出：y = %d\n", p.y);
// }

// struct date
// {
//     int year;
//     int month;
//     int day;
// };

// int numberOfDays(struct date d);
// bool isLeap(struct date d);

// int main(int argc, char const *argv[])
// {
//     struct date today, tomorrow;
//     printf("请输入今天的年-月-日：");
//     scanf("%d %d %d", &today.year, &today.month, &today.day);
//     if(today.day != numberOfDays(today))
//     {
//         tomorrow.year = today.year;
//         tomorrow.month = today.month;
//         tomorrow.day = today.day + 1;
//     }
//     else if(today.month == 12)
//     {
//         tomorrow.year = today.year + 1;
//         tomorrow.month = 1;
//         tomorrow.day = 1;
//     }
//     else
//     {
//         tomorrow.year = today.year;
//         tomorrow.month = today.month + 1;
//         tomorrow.day = 1;
//     }
//     printf("明天是%d年%d月%d日", tomorrow.year, tomorrow.month, tomorrow.day);
//     return 0;
// }

// bool isLeap(struct date d)
// {
//     bool ret = false;
//     if((d.month % 4 == 0 && d.month % 100 != 0) || d.month % 400 == 0)
//     {
//         ret = true;
//     }
//     return ret;
// }

// int numberOfDays(struct date d)
// {
//     int day;
//     const int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//     if(d.month == 2 && isLeap(d))
//     {
//         day = 29;
//     }
//     else
//     {
//         day = days[d.month - 1];
//     }
//     return day;
// }