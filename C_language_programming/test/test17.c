#include <stdio.h>

int main(void)
{
    int n, x;
    int cnt = 0;
    scanf("%d %d", &n, &x);
    int arr[n];
    char c = (char)x;
    for(int i = 0;i < n;i++)
    {
        arr[i] = i + 1;
    }
    for(int i = 0;i < n;i++)
    {
        if(arr[i] == c)
        {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}