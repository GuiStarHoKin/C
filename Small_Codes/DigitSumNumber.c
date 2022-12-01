#include <stdio.h>
#include <stdlib.h>

int DigitSum(int num) // hokin nb! DigitSum(1729) = DigitSum(172) + 9 = DigitSum(17) + 2 + 9 = DigitSum(1) + 7 + 2 + 9 = num + 7 + 2 + 9;
{
    if (num > 9) // 当有两位数时进去递归
    {
        return (num % 10) + DigitSum(num / 10); // 每次递归的结果是获取到的个位(%10),每次要让进去的数少一位(/10),类似于之前做的my_strlen递归版本1+my_strlen(str+1)
    }
    else // 当剩下一位数时返回那一位数
    {
        return num;
    }
}

int main()
{
    int num;
    printf("请输入一个非负整数:>");
    scanf("%d",&num);
    int sum = DigitSum(num);
    printf("计算结果为:%d\n",sum);
    system("pause");
    return 0;
}