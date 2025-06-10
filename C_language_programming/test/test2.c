#include <stdio.h>

typedef struct Salary   //薪水
{
    float baseSalary;
    float bonus;
} salary;

typedef struct Employee     //员工
{
    int id;
    union Details
    {
        char name[50];
        salary Salary;
    } details;
} emp;

/*第三项*/
int main(void)
{
    emp empid;
    empid.id = 1;
    printf("请输入你的姓名：");
    scanf("%s", empid.details.name);
    printf("你的工号是：%d\n", empid.id);
    printf("你的姓名是：%s\n", empid.details.name);
    printf("请输入基本薪水和奖金：");
    scanf("%f %f", &empid.details.Salary.baseSalary, &empid.details.Salary.bonus);
    printf("你的基本薪水是：%.2f，奖金是：%.2f\n", empid.details.Salary.baseSalary, empid.details.Salary.bonus);
    return 0;
}

// typedef union intfloat
// {
//     int i;
//     double f;
// } intfloat;

/*第二项*/
// int main(void)
// {
//     intfloat test;
//     test.i = 1234;
//     printf("test.i = %d\n", test.i);
//     test.f = test.i;
//     printf("test.f = %lf\n", test.f);
//     return 0;
// }

// typedef union DataStorage
// {
//     int intValue;
//     float floatValue;
//     char charValue[10];
// } Data;

/*第一项*/
// int main(void)
// {
//     Data test;
//     test.intValue = 1234;
//     printf("intValue = %d\n", test.intValue);
//     printf("floatValue = %f\n", (test.floatValue = (float)test.intValue));
//     /*因为int类型不能和char类型互换*/
//     return 0;
// }