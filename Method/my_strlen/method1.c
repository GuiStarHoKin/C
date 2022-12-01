#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* str)
{
    int count = 0;
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
    int ret = my_strlen(arry);
    printf("字符串的长度为:%d\n",ret);
    system("pause");
    return 0;
}