#include <stdio.h>
#include <stdlib.h>

int get_max(int num1,int num2)
{
    return (num1 > num2)?num1:num2;
}

int main()
{
    int num1;
    int num2;
    int ret;
    printf("请输入两个整数值:\n");
    scanf("%d%d",&num1,&num2);
    ret = get_max(num1,num2);
    printf("两个中的较大值为:%d\n",ret);
    system("pause");
    return 0;
}