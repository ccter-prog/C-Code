#include <stdio.h>

int main()
{
    int A;
    printf("请输入不超过6的数字：");
    scanf("%d",&A);
    int count = 0;
    for(int i = A;i <= A + 3;i++)
    {
        for(int k = A;k <= A + 3;k++)
        {
            for(int j = A;j <= A + 3;j++)
            {
                if(i != k && i != j && k != j)
                {
                    printf("%d%d%d",i,k,j);
                    count++;
                    if(count == 6)
                    {
                        printf("\n");
                        count = 0;
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
    }
    return 0;
}