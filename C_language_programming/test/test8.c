#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 50
#define GENDER_LEN 10

typedef struct Student
{
    char name[NAME_LEN];
    char gender[GENDER_LEN];
    int age;
    long long number;
    struct Student *next;
} Student;

void addStudent(void);
void printStudents(void);
Student *findStudent(long long number);
void updateStudent(void);

Student *head = NULL;

int main(int argc, char const *argv[])
{
    int choice;
    long long searchNumber;
    Student *foundStudent;
    while(1)
    {
        printf("1.添加学生\n2.打印学生信息\n3.查找学生\n4.退出\n请选择操作：");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                addStudent();
                break;
            case 2:
                printStudents();
                break;
            case 3:
                printf("请输入要查找的学号：");
                scanf("%lld", &searchNumber);
                foundStudent = findStudent(searchNumber);
                if(foundStudent != NULL)
                {
                    printf("找到学生，信息如下：\n");
                    printf("姓名：%s\n性别：%s\n年龄：%d\n学号：%lld\n"
                    , foundStudent -> name, foundStudent -> gender, foundStudent -> age, foundStudent -> number);
                    int xuanze;
                    printf("请选择要进行的操作，1.修改信息 0. 退出\n请选择：");
                    scanf("%d", &xuanze);
                    switch(xuanze)
                    {
                        case 1:
                            updateStudent();
                            break;
                        case 0:
                            exit(0);
                        default:
                            printf("不是有效操作。\n");
                            break;
                    }
                }
                else
                {
                    printf("未找到学号为 %lld 的学生。\n", searchNumber);
                }
                break;
            case 4:
                exit(0);
            default:
                printf("无效选择，请重新输入。\n");
        }
    }
    return 0;
}

void addStudent(void)
{
    Student *newStudent = (Student*)malloc(sizeof(Student));
    if(newStudent == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("请输入你的名字：");
    scanf("%s", newStudent -> name);
    printf("请输入性别：");
    scanf("%s", newStudent -> gender);
    printf("请输入你的年龄：");
    scanf("%d", &newStudent -> age);
    printf("请输入你的学号：");
    scanf("%lld", &newStudent -> number);
    newStudent -> next = head;
    head = newStudent;
}

void printStudents(void)
{
    Student *temp = head;
    while(temp != NULL)
    {
        printf("姓名：%s\n性别：%s\n年龄：%d\n学号：%lld\n"
        , temp -> name, temp -> gender, temp -> age, temp -> number);
        temp = temp -> next;
    }
}

Student *findStudent(long long number)
{
    Student *temp = head;
    while(temp != NULL)
    {
        if(temp -> number == number)
        {
            return temp;
        }
        temp = temp -> next;
    }
    return NULL;
}

void updateStudent(void)
{
    long long searchNumber;
    Student *currentStudent = NULL;
    int xuanze;
    printf("请输入要修改的学生学号：");
    scanf("%lld", &searchNumber);
    currentStudent = findStudent(searchNumber);
    if(currentStudent != NULL)
    {
start:
        printf("请选择要修改的信息，1.姓名 2.性别 3.年龄 4.学号 5.退出\n请选择：");
        scanf("%d", &xuanze);
        switch(xuanze)
        {
            case 1:
                printf("请输入新的姓名：");
                scanf("%s", currentStudent -> name);
                break;
            case 2:
                printf("请输入新的性别：");
                scanf("%s", currentStudent -> gender);
                break;
            case 3:
                printf("请输入新的年龄：");
                scanf("%d", &currentStudent -> age);
                break;
            case 4:
                printf("请输入新的学号：");
                scanf("%lld", &currentStudent -> number);
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("输入的不是有效操作。\n");
                break;
        }
        goto start;
        for(int i = 0;i <= 4;i++)
        {
            if(xuanze == i)
            {
                printf("学生信息已成功更新。\n");
                break;
            }
            else if(i == 4 && xuanze != i)
            {
                printf("未找到学号为 %lld 的学生。\n", searchNumber);
            }
        }
    }
}


// #include <stdio.h>
// #include <string.h>

// enum XINXI {NAME = 10, XINGBIE = 10};

// struct studentxitong
// {
//     char name[NAME];
//     char xingbie[XINGBIE];
//     int age;
//     long long number;
// };

// int main(int argc, char const *argv[])
// {
//     struct studentxitong student;
//     printf("请输入你的名字：");
//     char name[NAME];
//     scanf("%s", name);
//     strncpy(student.name, name, NAME);
//     printf("请输入性别：");
//     char xingbie[XINGBIE];
//     scanf("%s", xingbie);
//     strncpy(student.xingbie, xingbie, XINGBIE);
//     printf("请输入你的年龄：");
//     scanf("%d", &student.age);
//     printf("请输入你的学号：");
//     scanf("%lld", &student.number);
//     printf("你的姓名是：%s\n你的性别是：%s\n你的年龄是：%d\n你的学号是：%lld\n"
//     , student.name, student.xingbie, student.age, student.number);
//     return 0;
// }