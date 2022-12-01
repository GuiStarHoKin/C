#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* str)
{
    if(*str != '\0')
    {
        return 1 + my_strlen(++str);
    }
    else
    {
        return 0;
    }
}

int main()
{
    char arry[] = "hello";
    int ret = my_strlen(arry);
    printf("字符串的个数为:%d\n",ret);
    system("pause");
    return 0;
}