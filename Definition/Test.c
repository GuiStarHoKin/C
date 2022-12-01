#include <stdio.h>
#include <stdlib.h>
#include "Add.h"

int main()
{
    int num1;
    int num2;
    int ret;
    printf("请输入需要相加的两个数:>");
    scanf("%d%d",&num1,&num2);
    ret = Add(num1,num2);
    printf("结果为:%d\n",ret);
    system("pause");
    return 0;
}