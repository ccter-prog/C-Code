#include "01.h"

const int BLOCK_SIZE = 20;

Array array_create(int init_size)   //init_size 一开始希望这个数组是多大
{
    Array a;
    a.size = init_size;
    a.array = (int *)malloc(sizeof(int) * init_size);
    return a;
}

void array_free(Array *a)   //把结构变量传进去，通过指针传进去会使得体积、内存不那么大
{
    free(a -> array);
    a -> size = 0;
    a -> array = NULL;
}

int array_size(const Array *a)
{
    return a -> size;
}

int *array_at(Array *a, int index)  //返回a里面，index上的东西
{
    if(index >= a -> size)
    {
        array_inflate(a, (index / BLOCK_SIZE + 1) * BLOCK_SIZE - a -> size);
    }
    return &(a -> array[index]);
}

void array_inflate(Array *a, int more_size)
{
    int *p = (int *)malloc(sizeof(int) * (a -> size + more_size));
    for(int i = 0;i < a -> size;i++)
    {
        p[i] = a -> array[i];
    }
    free(a -> array);
    a -> array = p;
    a -> size += more_size;
}