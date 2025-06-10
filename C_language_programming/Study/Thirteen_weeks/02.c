#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("02test", "r");
    if(fp)
    {
        int num;
        fscanf(fp, "%d", &num);
        printf("%d\n", num);
        fclose(fp);
    }
    else
    {
        printf("无法打开文件\n");
    }
    fp = NULL;
    return 0;
}