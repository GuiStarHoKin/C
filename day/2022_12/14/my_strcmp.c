// int strcmp(const char* str1,const char* str2);
/*
以字符串的首字母进行比较 z>a 
abcd < za
aqcd > abcd
if str1 > str2 return 1
else if str1 < str2 return -1
else if str1 == str2 return 0

vs2013
> 1
== 0
< -1

gcc(ascii的差值)
> >0
== =0
< <0
*/

#include <stdio.h>
#include <assert.h>

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
    if(*str1 > *str2)
    {
        return 1; // 大于
    }
    else
    {
        return -1; // 小于
    }
}

int main()
{
    int ret = 0;
    const char* str1 = "abcdef";
    const char* str2 = "abcdef";
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
        printf("str1 == str2\n");
    }
    return 0;
}