#include <stdio.h>

int *f(void);
void g(void);

int main(int argc, char const *argv[])
{
    int *p = f();
    printf("*p = %d\n", *p);
    g();
    printf("*p = %d\n", *p);
    printf("p = %p\n", p);
    return 0;
}

int *f(void)
{
    int i = 12;
    return &i;
}

void g(void)
{
    int k = 24;
    printf("k = %d\n", k);
    printf("k = %p\n", &k);
}

// int gAll = 12;
// int f(void);

// int main(int argc, char const *argv[])
// {
//     f();
//     return 0;
// }

// int f(void)
// {
//     int i = 0;
//     static int all = 0;
//     printf("gAll = %p\n", &gAll);
//     printf("all =  %p\n", &all);
//     printf("i =    %p\n", &i);
//     // printf("In %s gAll = %d\n", __func__, all);
//     // all += 3;
//     // printf("agn in %s gAll = %d\n", __func__, all);
//     return all;
// }