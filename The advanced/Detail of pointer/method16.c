#include <stdio.h>
#include <stdlib.h>

int Add(int x,int y)
{
    return x + y;
}

int main()
{
    int* arr[10] = {0};
    // 指针数组
    int *p[10];
    // 数组指针
    int* (*pa)[10] = &arr;
    // 函数指针
    int (*pf)(int,int) = Add;// &Add
    int sum = pf(2,3);
    // int sum = Add(2,3);
    printf("%d\n",sum);
    // 函数指针数组
    int (*pArr[10])(int,int);
    // 指向函数指针数组的指针
    int (*(*ppArr)[10])(int,int) = &pArr;
    system("pause");
    return 0;

}