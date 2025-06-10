#include <stdio.h>

int main()
{
	int num1,num2;
	printf("请输入：");
	scanf("%d %d",&num1,&num2);
	double num3 = (num1 + num2) / 2.0;
	printf("它们的平均值是：%f\n",num3);
	return 0;
}