#include <stdio.h>
#include "student.h"

void read(FILE *fp, int index);

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("student.data", "r");
    if(fp)
    {
        fseek(fp, 0L, SEEK_END);
        long size = ftell(fp);
        int number = size / sizeof(Student);
        int index;
        printf("有%d个数据，要看第几个：", number);
        scanf("%d", &index);
        read(fp, index - 1);
        fclose(fp);
    }
    return 0;
}

void read(FILE *fp, int index)
{
    fseek(fp, index * sizeof(Student), SEEK_SET);
    Student stu;
    if(fread(&stu, sizeof(Student), 1, fp) == 1)
    {
        printf("姓名：%s\n", stu.name);
        printf("性别：");
        switch(stu.gender)
        {
            case 0:
                printf("男\n");
                break;
            case 1:
                printf("女\n");
                break;
            case 2:
                printf("其它\n");
                break; 
        }
        printf("年龄：%d\n", stu.age);
    }
}


// #include <stdio.h>
// #include "student.h"

// void getList(Student aStu[], int number);
// int save(Student aStu[], int number);

// int main(int argc, char const *argv[])
// {
//     int number;
//     printf("请输入学生数量：");
//     scanf("%d", &number);
//     Student aStu[number];
//     getList(aStu, number);
//     if(save(aStu, number))
//     {
//         printf("保存成功\n");
//     }
//     else
//     {
//         printf("保存失败\n");
//     }
//     return 0;
// }

// void getList(Student aStu[], int number)
// {
//     char format[STR_LEN];
//     sprintf(format, "%%%ds", STR_LEN - 1);
//     for(int i = 0;i < number;i++)
//     {
//         printf("当前是第%d名学生：\n", i + 1);
//         printf("姓名：");
//         scanf(format, aStu[i].name);
//         printf("性别：0-男，1-女，2-其它：");
//         scanf("%d", &aStu[i].gender);
//         printf("年龄：");
//         scanf("%d", &aStu[i].age);
//     }
// }

// int save(Student aStu[], int number)
// {
//     int ret = 0;
//     FILE *f = fopen("student.data", "w");
//     if(f)
//     {
//         ret = fwrite(aStu, sizeof(Student), number, f);
//         fclose(f);
//     }
//     return ret == number;
// }