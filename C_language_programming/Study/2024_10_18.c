#include <stdio.h>

int main(void)
{
    printf("%s:%d\n", __FILE__, __LINE__);
    printf("%s,%s\n", __DATE__, __TIME__);
    printf("%d\n", __STDC__);
    return 0;
}


// #include <stdio.h>

// #define PI 3.14159
// #define FORMAT "%f\n"
// #define PI2 2 * PI  //pi * 2
// #define PRT printf("%f\n", PI); \
//         printf("%f\n", PI2);
        
// int main(void)
// {
//     printf(FORMAT, PI2 * 3.0);
//     PRT;
//     printf("%d\n", __STDC__);
//     return 0;
// }