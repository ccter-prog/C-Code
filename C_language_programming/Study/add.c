#include <stdio.h>

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n > 0)
    {
        int test = n % 10;
        printf("%d",test);
        n /= 10;
    }
    putchar('\n');
    return 0;
}

// int add(int a,int b)
// {
// 	return a + b;
// }

// int main()
// {
// 	int a = 0, b = 0;
// 	scanf("%d %d",&a,&b);
// 	int num = add(a,b);
// 	printf("%d + %d = %d\n",a,b,num);
// 	return 0;
// }