#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_strlen(const char* str) // 不期望原值被改变
{   
    int count = 0;
    assert(str != NULL); // 指针不能为空
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char arry[] = "hello";
    printf("%d\n",my_strlen(arry));
    system("pause");
    return 0;
}