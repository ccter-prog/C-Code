#include <stdio.h>

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	printf("请输入时间1：");
	scanf("%d %d",&hour1,&minute1);
	printf("请输入时间2:");
	scanf("%d %d",&hour2,&minute2);
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	int t = t1 - t2;
	printf("时间差是%d时，%d分\n",t / 60,t % 60);
	return 0;
}