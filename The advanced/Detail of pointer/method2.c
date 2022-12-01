#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arry1[] = "abcdef";
    char arry2[] = "abcdef";
    const char* p1 = "abcdef";
    const char* p2 = "abcdef";
    if(p1 == p2) // 两个指针存的都是"abcdef的地址"都是指向"abcdef"的
    {
        printf("hehe\n");
        printf("arry1&:%p\n",arry1);
        printf("arry2&:%p\n",arry2);
        printf("p1&:%p\n",&p1); // p1和p2自身地址不一样
        printf("p2&:%p\n",&p2);
        printf("p1:%p\n",p1); // p1和p2指向的空间相同
        printf("p2:%p\n",p2);
    }
    else
    {
        printf("haha\n");
    }
    system("pause");
    return 0;
}