// 打印菱形
#include <stdio.h>
#include <stdlib.h>
//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *
int main()
{
    int i;
    int line = 0;
    printf("请输入上半部分的行数:>");
    scanf("%d",&line);
    // 1.上半部分
    for(i = 0;i < line;i++)
    {
        int j;
        for(j = 0;j < line-1-i;j++)
        {
            printf(" ");
        }
        for(j = 0;j < i*2+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // 2.下半部分
    for(i = 0;i < line-1;i++)
    {
        int j;
        for(j = 0;j <= i;j++)
        {
            printf(" ");
        }
        for(j = 0;j < 2*(line-1-i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}