#include <stdio.h>

#define PRETTY_PRINT(msg) printf(msg);

int main(int argc, char const *argv[])
{
    int n;
    printf("请输入n的值：");
    scanf("%d", &n);
    if(n < 10)
    {
        PRETTY_PRINT("n is less than 10\n");
    }
    else
    {
        PRETTY_PRINT("n is at least 10\n");
    }
    return 0;
}

// #include <stdio.h>

// #define RADTODEG1(x) ((x) * 57.29578)
// #define RADTODEG2(x) ((x) *57.29578)

// int main(int argc, char const *argv[])
// {
//     printf("%lf\n", RADTODEG1(1 + 2));
//     printf("%lf\n", 180 / RADTODEG2(2));
//     return 0;
// }