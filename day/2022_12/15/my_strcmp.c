// vs编译器模拟实现
#include <stdio.h>
#include <assert.h>

/*
int my_strcmp(const char* str1,const char* str2)
{
    assert(str1 && str2);
    while(*str1 == *str2)
    {
        if(*str1 == '\0')
        {
            return 0;
        }
        str1++;
        str2++;
    }
    if(*str1 > *str2)
    {
        return 1;
    }
    else
    {
        return -1;
    }

}

int main()
{
    int ret = 0;
    const char* str1 = "abcdef";
    const char* str2 = "bbcdef";
    ret = my_strcmp(str1,str2);
    if(ret > 0)
    {
        printf("str1 > str2\n");
    }
    else if(ret < 0)
    {
        printf("str1 < str2\n");
    }
    else
    {
        printf("str1 == str2");
    }
    return 0;
}
*/

// gcc编译器模拟实现

int my_strcmp(const char* str1, const char* str2)
{
    assert(str1 && str2);
    while(*str1 == *str2)
    {
        if(*str1 == '\0')
        {
            return 0;
        }
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main()
{
    int ret = 0;
    const char* str1 = "abcdef";
    const char* str2 = "bbcdef";
    ret = my_strcmp(str1,str2);
    if(ret > 0)
    {
        printf("str1 > str2,ascii差值为:%d\n",ret);
    }
    else if(ret < 0)
    {
        printf("str1 < str2,ascii差值为:%d\n",ret);
    }
    else
    {
        printf("str1 == str2,ascii差值为:%d\n",ret);
    }
    return 0;
}
