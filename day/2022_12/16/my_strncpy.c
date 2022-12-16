// char* strcpy(char* strDest, const char* strSource);
// char* strncpy(char* strDest, const char* strSource,size_t count);
// size_t -> unsigned int
/*
strncpy
拷贝num个字符从源字符串到目标空间
如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后面最加0，直到num个
可以看库函数代码自己模拟实现
*/

#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strncpy(char* dest, const char* sour,int count)
{
    assert(dest && sour);
    char* start = dest;
    while(count && (*dest++ = *sour++)) /* copy string */
    {
        count--;
    }
    if(count) /* pad out with zeros */
    {
        while(count)
        {
            *dest++ = '\0';
            count--;
        }
    }
    return start;
}

int main()
{
    int k;
    char* ret = NULL;
    char arr1[] = "hello";
    char arr2[] = "bit";
    k = strlen(arr2);
    ret = my_strncpy(arr1,arr2,k); // 从arr2拷贝k个字符到arr1
    printf("源内容:%s\n",arr1);
    printf("地址内容:%s\n",ret);
    return 0;
}
