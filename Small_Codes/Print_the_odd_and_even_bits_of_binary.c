#include <stdio.h>
#include <stdlib.h>

void print_odd_even(int num) // hokin nb
{
    int i;
    int j;
    printf("奇数位:");
    for(i = 30;i >= 0;i-=2) // 31是奇数位，对应的i为30
    {
        printf("%d ",(num >> i) & 1);
    }
    printf("\n偶数位:");
    for(i = 31;i >= 1;i-=2) // 32是偶数位，对应的i位31
    {
        printf("%d ",(num >> i) & 1);
    }
    printf("\n");
}

int main()
{
    int num;
    printf("请输入一个整数:>");
    scanf("%d",&num);
    print_odd_even(num);
    system("pause");
    return 0;
}