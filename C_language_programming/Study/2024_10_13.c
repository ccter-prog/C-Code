#include <stdio.h>

typedef union
{
    int i;
    char ch[sizeof(int)];
} chi;


int main(int argc, char const *argv[])
{
    chi a;
    a.i = 1234;
    for(int i = 0;i < sizeof(int);i++)
    {
        printf("%02hhX", a.ch[i]);
    }
    printf("%d", a.i);
    return 0;
}


// typedef struct
// {
//     int num1;
//     int num2;
//     int num3;
// } Date;

// typedef int i;

// int main(int argc, char const *argv[])
// {
//     printf("请输入2个数：");
//     Date d;
//     scanf("%d %d", &d.num1, &d.num2);
//     d.num3 = d.num1 + d.num2;
//     printf("它们的和是：%d\n", d.num3);
//     i i = 10;
//     printf("%d\n", i);
//     return 0;
// }