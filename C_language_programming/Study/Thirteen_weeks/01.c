#include <stdio.h>

int main(void)
{
    int num, num1, num2;
    num1 = scanf("%i", &num);
    num2 = printf("num = %d\n", num);
    printf("%d : %d\n", num1, num2);
    // printf("%d%n\n", 12345, &num);
    // printf("%d\n", num);
    return 0;
}


// int main(void)
// {
//     double a = 1234;
//     printf("%*.*lf\n", 9, 3, a);
//     return 0; 
// }