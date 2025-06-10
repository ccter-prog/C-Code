#include <stdio.h>

int main()
{
	int x;
	printf("请输入您最初存的钱：");
	scanf("%d",&x);
	double amount = x * (1 + 0.033) * (1 + 0.033) + (1 + 0.033);
	printf("会得到%f本息余额\n",amount);
	return 0;
}