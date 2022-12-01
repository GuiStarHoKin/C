#include <stdio.h>
#include <stdlib.h>

int Add(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return Add(n - 1) + n;
    }
}

int main()
{
    int number;
    int result;
    printf("请输入你想从0向加到的整数:\n");
    scanf("%d",&number);
    result = Add(number);
    printf("计算结果为:%d\n\n",result);
    system("pause");
    return 0;
}