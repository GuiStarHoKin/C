#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strcpy(char* dest,const char* src) // 不改变源的值(*src)不能被改变
{
    char* ret = dest;
    assert(dest != NULL); // 断言
    assert(src != NULL); // 断言
    while(*dest++ = *src++) // 把src指向的字符串拷贝到dest里面去，包含'\0'
    {
        ;
    }
    return ret;
}

int main()
{
    char arry1[] = "########";
    char arry2[] = "bit";
    printf("%s\n",my_strcpy(arry1,arry2)); // 利用函数的返回值进行链式访问
    system("pause");
    return 0;
}