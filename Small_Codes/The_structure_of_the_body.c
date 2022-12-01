#include <stdio.h>
#include <stdlib.h>

struct Stu
{
    char name[20];
    int age;
    char id[20];
};

int main()
{
    struct Stu s1 = {"aaa", 10, "1234"};
    printf("%d\n", sizeof(struct Stu));
    printf("%s\n", s1.name);
    struct Stu *p = &s1;
    printf("%s\n", (*p).name);
    printf("%s\n", p->name);
    system("pause");
    return 0;
}