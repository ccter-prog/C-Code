#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int len, int target);

int main(void)
{
    int nums[] = {2, 7, 11, 15, };
    int target = 17;
    int len = sizeof(nums) / sizeof(nums[0]);
    int *return_size = twoSum(nums, len, target);
    printf("[%d, %d]\n", return_size[0], return_size[1]);
    free(return_size);
    return 0;
}

int *twoSum(int *nums, int len, int target)
{
    int *p = (int *)malloc(sizeof(int) * 2);
    for(int i = 0;i < len;i++)
    {
        for(int j = i + 1;j < len;j++)
        {
            if(nums[i] + nums[j] == target)
            {
                p[0] = i;
                p[1] = j;
                goto end;
            }
        }
    }
end:
    return p;
}