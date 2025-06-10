#include <stdio.h>

int main()
{
    int grade;
    printf("请输入0～100的数：");
    scanf("%d",&grade);
    grade /= 10;
    switch(grade)
    {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("E\n");
            break;
        default:
            printf("F\n");
            break;
    }
    return 0;
}