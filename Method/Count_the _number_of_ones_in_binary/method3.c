#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    int count = 0;
    printf("请输入一个整数:>"); // -1
    scanf("%d",&num);
    for(i = 0;i < 32;i++)
    {
        if(1 == ((num >> i) & 1))
        {
            count++;
        }
    }
    printf("内存中二进制1的个数为:%d\n",count);
    system("pause");
    return 0;
}