#include <stdio.h>
#include <stdlib.h>

int* my_strlen(char* str)
{
    char* start = str;
    char* end = str;
    while(*end != '\0')
    {
        end++;
    }
    return end - start;
}

int main()
{
    char arry[] = "hello";
    int* ret = my_strlen(arry);
    printf("字符串的长度为:%d\n",ret);
    system("pause");
    return 0;
}