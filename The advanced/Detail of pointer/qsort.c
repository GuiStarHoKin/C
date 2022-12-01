// void qsort(void* base,seze_t num,size_t width,int(*cmp)(const void *e1,const void *e2));
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int cmp_int(const void*e1,const void*e2)
{
    return (*(int*)e1 - *(int*)e2);
}

void TestInt()
{
    int arry[] = {1,4,7,8,5,2,9,6,3,0,10};
    int sz = sizeof(arry) / sizeof(arry[0]);
    printf("排序前:");
    int i;
    for(i = 0;i < sz;i++)
    {
        printf("%d ",arry[i]);
    }
    qsort(arry,sz,sizeof(arry[0]),cmp_int);
    printf("\n排序后:");
    for(i = 0;i < sz;i++)
    {
        printf("%d ",arry[i]);
    }
    printf("\n");
}

int cmp_float(const void*e1,const void*e2)
{
    if(*(float*)e1 == *(float*)e2)
    {
        return 0;
    }
    else if(*(float*)e1 > *(float*)e2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void TestFloat()
{
    int i;
    float arry[] = {1.1,4.4,7.7,8.8,5.5,2.2,9.9,6.6,3.3,0.0,10.10};
    int sz = sizeof(arry) / sizeof(arry[0]);
    printf("排序前:");
    for(i = 0;i < sz;i++)
    {
        printf("%f ",arry[i]);
    }
    printf("\n排序后:");
    qsort(arry,sz,sizeof(arry[0]),cmp_float);
    for(i = 0;i < sz;i++)
    {
        printf("%f ",arry[i]);
    }
    printf("\n");
}

struct Stu
{
    char name[20];
    int age;
};

int cmp_stu_by_age(const void*e1,const void*e2)
{
    return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
}

void TestStruct_age()
{
    int i;
    struct Stu s[3]= {{"zhangsan",18},{"wangwu",20},{"lisi",19}};
    int sz = sizeof(s) / sizeof(s[0]);
    printf("排序前:");
    for(i = 0;i < sz;i++)
    {
        printf("%s:%d ",s[i].name,s[i].age);
    }
    qsort(s,sz,sizeof(s[0]),cmp_stu_by_age);
    printf("\n排序后:");
    for(i = 0;i < sz;i++)
    {
        printf("%s:%d ",s[i].name,s[i].age);
    }
    printf("\n");
}

int cmp_stu_by_name(const void*e1,const void*e2)
{
    return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name); // return - 1 | 0 | 1
}

void TestStruct_name()
{
    int i;
    struct Stu s[3] = {{"zhangsan",18},{"wangwu",20},{"lisi",19}};
    int sz = sizeof(s) / sizeof(s[0]);
    printf("排序前:");
    for(i = 0;i < sz;i++)
    {
        printf("%s:%d ",s[i].name,s[i].age);
    }
    qsort(s,sz,sizeof(s[0]),cmp_stu_by_name);
    printf("\n排序后:");
    for(i = 0;i < sz;i++)
    {
        printf("%s:%d ",s[i].name,s[i].age);
    }
    printf("\n");
}

int main()
{
    TestInt();
    TestFloat();
    TestStruct_age();
    TestStruct_name();
    system("pause");
    return 0;
}