#include <stdio.h>
#include <stdlib.h>

/*int get_strlen(char* p)
{
    int count = 0;
    while(*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}*/

int get_strlen(char* p)
{
    if(*p != '\0')
    {
        return 1 + get_strlen(p + 1);// 不能为p++，可以为p + 1，也可以是++p先加一后使用，不然就出现死循环
    }
    else
    {
        return 0;
    }
}

int main()
{
    char arry[] = {0};
    printf("请输入字符串:>");
    scanf("%s",&arry);
    int ret = get_strlen(arry);
    printf("字符串的长度为:%d\n",ret);
    system("pause");
    return 0;
}