#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void mianbao(void);
void yiwannian(void);
void xunhuan(void);

int main()
{
    char arr[] = "";
    printf("你爱面包吗？");
    scanf("%s",arr);
    if(strcmp(arr,"爱") == 0 || strcmp(arr,"喜欢") == 0)
    {
        yiwannian();
    }
    else
    {
        printf("不，你喜欢\n");
        sleep(2);
        yiwannian();
    }
    return 0;
}

void yiwannian(void)
{
    printf("要不然我们就这样一万年\n");
    sleep(1);
    for(int i = 0;i < 1000;i++)
    {
        printf("I love you ~ love you\n");
    }
    char arr[] = "";
    printf("要看面包的照片吗？");
    while(getchar() != '\n');
    scanf("%s",arr);
    if(strcmp(arr,"要") == 0)
    {
        mianbao();
    }
    else
    {
        printf("不，你想看\n");
        sleep(3);
        mianbao();
    }
}

void mianbao(void)
{
    system("open /Users/cyz/Desktop/Code/picture_but_bread/Unknown.jpg");
    sleep(1);
    system("open /Users/cyz/Desktop/Code/picture_but_bread/Unknown-2.jpg");
    sleep(1);
    system("open /Users/cyz/Desktop/Code/picture_but_bread/Unknown-3.jpg");
    sleep(1);
    system("open /Users/cyz/Desktop/Code/picture_but_bread/Unknown-4.jpg");
    sleep(1);
    system("open /Users/cyz/Desktop/Code/picture_but_bread/Unknown-5.jpg");
    sleep(1);
    system("open /Users/cyz/Desktop/Code/picture_but_bread/Unknown-6.jpg");
    sleep(1);    
    system("open /Users/cyz/Desktop/Code/picture_but_bread/Unknown-7.jpg");
    sleep(1);
    system("open /Users/cyz/Desktop/Code/picture_but_bread/Unknown-8.jpg");
    sleep(1);
    system("open /Users/cyz/Desktop/Code/picture_but_bread/Unknown-9.jpg");
    sleep(1);
    system("open /Users/cyz/Desktop/Code/picture_but_bread/Unknown-10.jpg");
    sleep(1);
    system("open /Users/cyz/Desktop/Code/picture_but_bread/Unknown-11.jpg");
    xunhuan();
}

void xunhuan(void)
{
    char str[] = "";
    int i = 1;
    while(i <= 10)
    {
        printf("(第%d次),说十遍我爱面包：",i);
        scanf("%s",str);
        if(strcmp(str,"我爱面包") == 0)
        {
            i++;
            while(getchar() != '\n');
        }
        else
        {
            printf("不算，重来\n");
            while(getchar() != '\n');
        }
    }
}