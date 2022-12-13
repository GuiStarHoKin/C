// char* strcat(char* dest,const char* sour)

/*
err
char arr1[] = "hello";
char arr2[] = "world";
strcat(arr1,arr2);
*/

/*
true
char arr1[30] = "hello";
char arr2[] = "world";
strcat(arr1,arr2);
*/

/*
查看是否追加\0
char arr1[30] = "hello\0xxxxxxxx";
char arr2[] = "world";
strcat(arr1,arr2);
>>> "helloworld\0xxx"
*/

#include <stdio.h>
#include <assert.h>

char* my_strcat(char* dest, const char* src)
{
    assert(dest && src);
    char* ret = dest;
    // 1.先找到dest的\0的位置
    while(*dest != '\0')
    {
        dest++;
    }
    
    // 2.在'\0'后最加
    while(*dest++ = *src++)
    {
        ;
    }
    return ret;
}

int main()
{
    char arr1[] = "hello";
    char arr2[] = "world";
    char* ret = my_strcat(arr1,arr2);
    printf("源数组:%s\n",arr1);
    printf("目的地址返回:%s\n",ret);
    return 0;
}