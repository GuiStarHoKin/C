// 字符串逆序

#include <stdio.h>
#include <string.h>
#include <assert.h>

void Reverse(char* str)
{
    assert(str); // 传了一个地址进来应该用assert来断言一下
    int len = strlen(str);
    char* left = str;
    char* right = str + len - 1;

    while(left < right)
    {
        char temp;
        temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

int main()
{
    char arry[256];
    printf("请输入字符串:>");
    //scanf("%s",arry); // %s遇到空格就不再读取了
    fgets(arry,256,stdin); // 用gets()可以读取一行的内容
    Reverse(arry);
    printf("逆序后的数组为:>%s\n",arry);
    return 0;
}