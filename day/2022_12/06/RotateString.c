// 旋转字符串
// 暴力求解法
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


void left_move(char* str,int n)
{
    assert(str); // 良好的编程习惯
    int i;
    int len = strlen(str);
    for(i = 0;i < n;i++)
    {
        // 旋转一个字符
        char tmp = *(str);
        int j;
        for(j = 0;j < len - 1;j++)
        {
            *(str + j) = *(str + j + 1);
        }
        *(str + len - 1) = tmp;
    }
}

int main()
{
    int n = 0;
    char arry[] = "abcdefg";
    printf("旋转前为:%s\n",arry);
    printf("请输入要左旋的字符数:>");
    scanf("%d",&n);
    left_move(arry,n);
    printf("旋转后为:%s\n",arry);
    return 0;
}