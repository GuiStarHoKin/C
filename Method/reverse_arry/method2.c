// 不调用字符串库函数
#include <stdio.h>
#include <stdlib.h>

void reverse(char str[],int sz)
{
    int left = 0;
    int right = sz - 1;
    char temp = 0;
    while(left < right)
    {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }

}

int my_strlen(char* str)
{
    int count = 0;
    while((*str) != '\0')
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char str[] = "olleh";
    int sz = my_strlen(str);
    printf("原数组为:>%s\n",str);
    reverse(str,sz);
    printf("现数组为:>%s\n",str);
    system("pause");
    return 0;
}