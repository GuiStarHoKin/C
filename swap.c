#include <stdio.h>
#include <stdlib.h>

/*
void swap(int x,int y)// x , y 开辟了自己的空间，x ，y有了自己的地址，与主函数中的x，y的地址不一样
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("%d %d\n",x,y);
}
*/

void swap(int* x,int* y)// x y -> 指针变量(存放16进制地址的变量叫指针变量),变量的类型为int*
{
    int temp;
    temp = *x;//*x 解地址x即得到a
    *x = *y;
    *y = temp;

}

int main()
{
    int a;
    int b;
    printf("请输入两个需要交换的数字:>");
    scanf("%d%d",&a,&b);
    printf("a = %d,b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d,b = %d",a,b);
    system("pause");
    return 0;
}