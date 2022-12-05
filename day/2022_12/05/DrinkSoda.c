// 喝汽水，1瓶汽水1元，2个空瓶可以换1瓶汽水，20元可以喝多少汽水
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money = 0;
    printf("请输入钱数:>");
    scanf("%d",&money);
    int total = money;
    int empty = total;
    while(empty >= 2)
    {
        total += empty / 2;
        empty = empty / 2 + empty % 2;
    }
    printf("总共可以喝:%d瓶\n",total);
    return 0;
}

// int main()
// {
//     int money = 0;
//     int total = 0;
//     printf("请输入钱数:>");
//     scanf("%d",&money);
//     if(money == 0)
//     {
//         total = 0;
//     }
//     else
//     {
//         total = 2 * money - 1;
//     }
//     printf("总共可以喝:%d瓶\n",total);
//     return 0;
// }