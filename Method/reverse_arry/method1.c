// 调用字符串库函数
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;
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

int main()
{
    char str[] = "olleh";
    printf("原字符数组:>%s\n",str);
    reverse(str);
    printf("现字符数组:>%s\n",str);
    system("pause");
    return 0;

}