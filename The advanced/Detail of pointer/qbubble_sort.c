#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_int(const void*e1,const void*e2)
{
    return *(int*)e1 - *(int*)e2;
}

void swap(char* buf1,char* buf2,int width)
{
    int i;
    for(i = 0;i < width;i++)
    {
        int temp = *buf1;
        *buf1 = *buf2;
        *buf2 = temp;
        buf1++;
        buf2++;
    }
}

void qBubbleSort(void* base,int sz,int width,int (*cmp)(const void* e1,const void* e2))
{
    int i;
    for(i = 0;i < sz - 1;i++)
    {
        int j;
        for(j = 0;j < sz - i - 1;j++)
        {
            if(cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0) // 调用相应的比较函数,要以0为分界线->==0相等，>0前元素大于后元素，<0后元素大于前元素
            {
                swap((char*)base+j*width,(char*)base+(j+1)*width,width); // 实现交换函数
            }
        }
    }
}

void TestInt(void)
{
    int i;
    int arry[] = {1,4,7,8,5,2,9,6,3,0,10};
    int sz = sizeof(arry) / sizeof(arry[0]);
    printf("排序前:>");
    for(i = 0;i < sz;i++)
    {
        printf("%d ",arry[i]);
    }
    qBubbleSort(arry,sz,sizeof(arry[0]),cmp_int);// 1.数组首元素地址 2.数组长度 3.数组每个元素的大小 4.数组的比较方法
    printf("\n排序后:>");
    for(i = 0;i < sz;i++)
    {
        printf("%d ",arry[i]);
    }
    printf("\n");
}

struct Stu
{
    char name[20];
    int age;
};

int cmp_stru_by_age(const void*e1,const void*e2)
{
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void TestStructByAge(void)
{
    int i;
    struct Stu s[3] = {{"zhangsan",18},{"lisi",20},{"wangwu",19}};
    printf("排序前:>");
    int sz = sizeof(s) / sizeof(s[0]);
    for(i = 0;i < sz;i++)
    {
        printf("%s:%d ",s[i].name,s[i].age);
    }
    qBubbleSort(s,sz,sizeof(s[0]),cmp_stru_by_age);
    printf("\n排序后:>");
    for(i = 0;i < sz;i++)
    {
        printf("%s:%d ",s[i].name,s[i].age);
    }
    printf("\n");
}

int cmp_stru_by_name(const void*e1,const void*e2)
{
    return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}

void TestStructByName(void)
{
    int i;
    struct Stu s[3] = {{"zhangsan",18},{"lisi",20},{"wangwu",19}};
    int sz = sizeof(s) / sizeof(s[0]);
    printf("排序前:>");
    for(i = 0;i < sz;i++)
    {
        printf("%s:%d ",s[i].name,s[i].age);
    }
    qBubbleSort(s,sz,sizeof(s[0]),cmp_stru_by_name);
    printf("\n排序后:>");
    for(i = 0 ;i < sz;i++)
    {
        printf("%s:%d ",s[i].name,s[i].age);
    }
    printf("\n");
}

int cmp_float(const void* e1,const void* e2)
{
    if((*(float*)e1 - *(float*)e2) > 0)
    {
        return 1;
    }
    else if((*(float*)e1 - *(float*)e2) == 0)
    {
        return 0;
    }
    else if((*(float*)e1 - *(float*)e2) < 0)
    {
        return -1;
    }
}

void TestFloat(void)
{
    int i;
    float arry[] = {1.1,4.4,7.7,8.8,5.5,2.2,9.9,6.6,3.3,0.0,10.10};
    int sz = sizeof(arry) / sizeof(arry[0]);
    printf("排序前:>");
    for(i = 0;i < sz;i++)
    {
        printf("%f ",arry[i]);
    }
    qBubbleSort(arry,sz,sizeof(arry[0]),cmp_float);
    printf("\n排序后:>");
    for(i = 0;i < sz;i++)
    {
        printf("%f ",arry[i]);
    }
    printf("\n");
}

int main()
{
    TestInt();
    TestStructByAge();
    TestStructByName();
    TestFloat();
    system("pause");
    return 0;
}