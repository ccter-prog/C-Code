#include <stdio.h>

#define SWAP(a, b) do {int temp = a; a = b; b = temp;} while(0)

//第三题
int main(int argc, char const *argv[])
{
    int a, b;
    printf("请输入要进行交换的两个数：");
    scanf("%d %d", &a, &b);
    SWAP(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}


// #define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0])) 

// //第二题
// int main(int argc, char const *argv[])
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     printf("数组的大小是：%lu\n", ARRAY_LENGTH(arr));
//     return 0;
// }


//第一题
// #define MAX(a, b) ((a) > (b) ? (a) : (b))

// int main(int argc, char const *argv[])
// {
//     int a, b;
//     printf("请输入要进行比较的两个数：");
//     scanf("%d %d", &a, &b);
//     printf("%d\n", MAX(a, b));
//     return 0;
// }