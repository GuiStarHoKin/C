/*my_strlen()
1.计数器的方法
2.递归
3.指针-指针*/


// 1.计数器的方法

#include <stdio.h>
#include <assert.h>

int my_strlen(const char *str)// *str指向的arr不能被改变
{
    assert(str != NULL);
    int count = 0;
    while(*str != '\0')//while(*arr)
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    int len = 0;
    char arr[] = "abcdef";
    len = my_strlen(arr);
    printf("长度为:%d\n",len);
    return 0;
}

// 2.递归的方法（不创建临时变量求字符串长度）
/*
#include <stdio.h>
#include <assert.h>

int my_strlen(const char *str)
{
    assert(str != NULL);
    if(*str != '\0')
    {
        str++;
        return 1 + my_strlen(str); 
    }
    else
    {
        return 0;
    }
}

int main()
{
    int len = 0;
    char arr[] = "abcdef";
    len = my_strlen(arr);
    printf("长度为:%d\n",len);
    return 0;
}*/

// 3.指针-指针
/*
#include <stdio.h>
#include <assert.h>

int* my_strlen(const char *str)
{
    assert(str != NULL);
    char *start = str;
    char *end = str;
    while(*end != '\0')
    {
        end++;
    }
    return (end - start);
}

int main()
{
    int *len = 0;
    char arr[] = "abcdef";
    len = my_strlen(arr);
    printf("长度为:%d\n",len);
    return 0;
}*/

/*
size_t strlen(const char *string)

size_t == unsigned int

设计返回类型为int可以避免出现下面的歧义
            3    -             6     =   -3//内存中为无符号数，故为一个很大的数
if(strlen("abc") - (strlen("abcdef")) > 0)
{
    printf("hehe\n");
}
else
{
    printf("haha\n");
}*/