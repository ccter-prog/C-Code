#include <stdio.h>

int main()
{
    int a,b,c,test;
    printf("请输入3位正整数：");
    scanf("%d %d %d",&a,&b,&c);
    printf("a = %d,b = %d,c = %d\n",a,b,c);
    test = a;
    a = c;
    c = test;
    printf("逆序后：a = %d,b = %d,c = %d\n",a,b,c);
    return 0;
}