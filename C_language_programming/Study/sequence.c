#include <stdio.h>

/*计算序列 2/1+3/2+5/3+8/5+……的前N项之和从第2项起，每一项的分子是前一项分子与分母的和,分母是前一项的分子*/
int main()
{
    int n;
    scanf("%d",&n);
    double dividend = 2,divisor = 1;
    double sum = 0.0;
    double t;
    for(int i = 1;i <= n;i++)
    { 
        sum = sum + dividend / divisor;
        t = dividend;
        dividend += divisor;
        divisor = t;
    }
    printf("%.2f\n",sum);
    return 0;
}