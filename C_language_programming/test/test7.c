#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 34, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i < len;i++)
    {
        for(int j = 0;j < len - i - 1;j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < len;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

//第四题
// int main(void)
// {
//     int bubbleSortArr[] = {5, 3, 8, 4, 2,};
//     int temp;
//     int len = sizeof(bubbleSortArr) / sizeof(bubbleSortArr[0]);
//     for(int i = 0;i < len - 1;i++)
//     {
//         for(int j = 0;j < len - i - 1;j++)
//         {
//             if(bubbleSortArr[j] > bubbleSortArr[j + 1])
//             {
//                 temp = bubbleSortArr[j];
//                 bubbleSortArr[j] = bubbleSortArr[j + 1];
//                 bubbleSortArr[j + 1] = temp;
//             }
//         }
//     }
//     for(int i = 0;i < len;i++)
//     {
//         printf("%d ", bubbleSortArr[i]);
//     }
//     printf("\n");
//     return 0;
// }

//第三题
// int main(void)
// {
//     int reverseArr[] = {1, 2, 3, 4, 5,};
//     int len = sizeof(reverseArr) / sizeof(reverseArr[0]);
//     for(int i = 0, j = len - 1;i < len / 2;i++, j--)
//     {
//         int temp = reverseArr[i];
//         reverseArr[i] = reverseArr[j];
//         reverseArr[j] = temp;
//     }
//     for(int k = 0;k < len;k++)
//     {
//         printf("%d ", reverseArr[k]);
//     }
//     printf("\n");
//     return 0;
// }

//第二题
// int main(void)
// {
//     int nums[] = {2, 4, 6, 8, 10,};
//     int max = nums[0];
//     int len = sizeof(nums) / sizeof(nums[0]);
//     for(int i = 0;i < len;i++)
//     {
//         if(max < nums[i])
//         {
//             max = nums[i];
//         }
//     }
//     printf("max = %d\n", max);
//     return 0;
// }

//第一题
// int main(void)
// {
//     int arr[] = {1, 3, 5, 7, 9};
//     int len = sizeof(arr) / sizeof(arr[0]);
//     for(int i = 0;i < len;i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }