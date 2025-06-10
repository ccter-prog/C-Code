#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct _student
{
    char name[100];
    char gender[10];
    int age;
    long long number;
    struct _student *next;
} Student;

void add(Student **student_ptr, Student **head, Student **tail);
void print(Student *head);

int main(void)
{
    Student *student;
    Student *head = NULL;
    Student *tail = NULL;
    add(&student, &head, &tail);
    print(head);
    return 0;
}

void add(Student **student, Student **head, Student **tail)
{
    Student *p = (Student *)malloc(sizeof(Student));
    if(p == NULL)
    {
        printf("内存分配失败\n");
        return;
    }
    printf("请输入名字：");
    scanf("%99s", p -> name);
    printf("请输入性别：");
    scanf("%9s", p -> gender);
    printf("请输入年龄：");
    scanf("%d", &(p -> age));
    printf("请输入学号：");
    scanf("%lld", &(p -> number));
    printf("存储完毕");
    if(*head)
    {
        (*tail) -> next = p;
        *tail = p;
    }
    else
    {
        *head = p;
        *tail = p;
        p -> next = NULL;
    }
}

void print(Student *head)
{
    Student *list = head;
    while(list)
    {
        printf("姓名：%s\n", list -> name);
        printf("性别：%s\n", list -> gender);
        printf("年龄：%d\n", list -> age);
        printf("学号：%lld\n", list -> number);
        list = list -> next;
    }
    printf("信息输出完毕\n");
    system("open /Users/cyz/Desktop/Code/picture_but_bread/Unknown.jpg");
    sleep(1);
    system("open /Users/cyz/Desktop/Code/picture_but_bread/Unknown-1.jpg");
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
}