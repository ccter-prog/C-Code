#include <stdio.h>

void mystrcat(char *str1, const char *str2);

int main(int argc, char const *argv[])
{
    char str1[100] = "Hello";
    char str2[] = "World";
    mystrcat(str1, str2);
    char *p = str1;
    while(*p != '\0')
    {
        printf("%c ", *p);
        p++;
    }
    printf("\n");
    p = NULL;
    return 0;
}

void mystrcat(char *str1, const char *str2)
{
    while(*str1 != '\0')
    {
        str1++;
    }
    while(*str2 != '\0')
    {
        *str1 = *str2;
        str1++, str2++;
    }
    *str1 = '\0';
}