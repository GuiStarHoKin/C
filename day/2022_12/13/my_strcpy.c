// cahr* strcpy(char * dest, const char * source);
#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strcpy(char* dest, const char* src)
{
    assert(dest != NULL);
    assert(src != NULL);
    assert(strlen(dest) > strlen(src)); // 目标空间必须足够大
    char* ret = dest;
    /*
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = *src;
    */
    // 拷贝src指向的字符串到dest指向的空间,包含'\0'
    while(*dest++ = *src++)
    {
        ;
    }
    // 返回目的空间的起始位置
    return ret;
}

int main()
{
    char arr1[] = "########";
    char arr2[] = "hello";
    char *ret = strcpy(arr1,arr2);
    printf("源数据：%s\n",arr1); // 源数据
    printf("返回值：%s\n",ret); // 返回值
    return 0;
}