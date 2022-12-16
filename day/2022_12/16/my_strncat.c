// char* strncat(char* dest,const char* sour,size_t count);
// 看写好的库函数模拟实现
/*
#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strncat(char* str1,const char* str2,int count)
{
    assert(str1 && str2);
    char* start = str1;
    while(*str1++) // 找\0
    {
        ;
    }
    str1--; // 找太过了
    while(count) // 复制
    {
        if(*str2 != '\0')
        {
            *str1 = *str2;
            str1++;
            str2++;
            count--;
        }
        else
        {
            return start; // str2中有\0
        }
    }
    *str1 = '\0';//str2中无\0
    return start;
    
}

int main()
{
    int len = 0;
    char* ret = NULL;
    char arr1[30] = "hello"; // 源数组需要足够大
    char arr2[] = "world";
    len = strlen(arr2);
    ret = my_strncat(arr1,arr2,len); // test-> len/3/8
    printf("源数组:%s\n",arr1);
    printf("返回值:%s\n",ret);
    return 0;
}*/


#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strncat(char* str1,const char* str2,int count)
{
    assert(str1 && str2);
    char* start = str1;
    while(*str1++) // 找\0
    {
        ;
    }
    str1--; // 找太过了
    while(count--) // 复制
    {
        if(!(*str1++ = *str2++))
        {
            return start; // count的str2中有\0
        }
    }
    *str1 = '\0';
    return start;// count中的str2中无\0，需手动加入\0
}

int main()
{
    char* ret = NULL;
    int len = 0;
    char arr1[30] = "hello"; // 源数组需要足够大
    char arr2[] = "world";
    len = strlen(arr2);
    ret = my_strncat(arr1,arr2,len); // test->len/3/8
    printf("源数组:%s\n",arr1);
    printf("返回值:%s\n",ret);
    return 0;
}