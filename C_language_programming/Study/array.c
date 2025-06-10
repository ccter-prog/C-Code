#include <stdio.h>

int search(int key,int a[],int length);

int main()
{
    int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,32,};
    int key;
    printf("请输入要寻找的数字：");
    scanf("%d",&key);
    int length = sizeof(a) / sizeof(a[0]);
    int ret = search(key,a,length);
    if(ret != -1)
    {
        printf("找到了，它的下标是%d\n",ret);
    }
    else
    {
        printf("没有找到你输入的数字\n");
    }
    return 0;
}

/*
key 要寻找的数字
a 要寻找的数组
length 数组a的长度
如果找到，返回其在a中的位置；如果找不到则返回-1
*/
int search(int key,int a[],int length)
{
    int ret = -1;
    for(int i = 0;i < length;i++)
    {
        if(a[i] == key)
        {
            ret = i;
            break;
        }
    }
    return ret;
}