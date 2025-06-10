#ifndef __01_H__
#define __01_H__

typedef struct
{
    int *array;
    int size;
} Array;

Array array_create(int init_size);
void array_free(Array *a);
int array_size(const Array *a);
int *array_at(Array *a, int index);
void array_inflate(Array *a, int more_size);

#endif