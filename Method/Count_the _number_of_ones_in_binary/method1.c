#include <stdio.h>
#include <stdlib.h>

// 内存中存放的整数的二进制1的个数(该整数的补码(整数在内存中是以补码的形式存放的)中1的个数)

int main() // 对负数不支持 
{
    int num;
    int count = 0;
    printf("请输入一个整数:>");
    scanf("%d",&num);
    while(num)
    {
        if(num % 2 == 1)
        {
            count++;
        }
        num = num / 2;
    }
    printf("该整数在内存中二进制为1的个数为:%d\n",count);
    system("pause");
    return 0;
}