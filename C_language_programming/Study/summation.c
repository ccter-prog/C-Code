#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0;
    scanf("%d",&n);
    double sign = 1.0;
    for(int i = 1;i <= n;i++)
    {
        sum += sign / i;
        sign = -sign;
    }
    printf("f(%d) = %f\n",n,sum);
    return 0;
}