// 不调用字符串函数，使用指针变量
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* str)
{
    int count = 0;
    while ((*str) != '\0')
    {
        count++;
        str++;
    }
    return count;
}

void reverse(char* str)
{
    char temp = 0;
    int len = my_strlen(str);
    temp = str[0]; // 1
    str[0] = str[len-1]; // 2
    str[len-1] = '\0'; // 3
    if(my_strlen(str+1) >= 2)
        reverse(str+1);
    str[len-1] = temp;

}

int main()
{
    char str[] = "olleh";
    printf("原数组为:>%s\n", str);
    reverse(str);
    printf("现数组为:>%s\n", str);
    system("pause");
    return 0;
}