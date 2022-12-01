#include <stdio.h>
#include <stdlib.h>

/* 函数实现
int LargeValues(int x , int y)
{   
    int max;
    max = (x > y) ? x : y;
    printf("较大的数为:%d\n\n",max);
    return 0;
}
*/
#define LargerValues(x,y) (x>y?x:y) // 宏的定义

int main()
{
    int num1;
    int num2;
    int larger_values;// 宏定义函数需要
    printf("请输入两个整数:\n");
    scanf("%d %d",&num1,&num2);
    int larger_values = LargerValues(num1,num2);
    printf("较大值为:%d\n\n",larger_values);
    system("pause");
    return 0;
}