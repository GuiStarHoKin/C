#include <stdio.h>
#include <stdlib.h>

void print(int num)
{
    if(num > 9)
    {
        print(num / 10);
    }
    printf("%d ",num % 10);
}

int main()
{
    int num;
    printf("请输入一个整数:>");
    scanf("%d",&num);
    print(num);
    system("pause");
    return 0;
}