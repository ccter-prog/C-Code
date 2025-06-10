#include <stdio.h>

int main()
{
    int number = 0; 
    int sum = 0,count = 0;
    while(number != -1)
    {
        sum += number;
        count++;
        scanf("%d",&number);
    }
    printf("平均数是%2f\n",1.0 * sum / count);
    return 0;
}