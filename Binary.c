#include <stdio.h>
#include <stdlib.h>
// https://www.bilibili.com/video/BV1Nx411D712/?spm_id_from=333.337.search-card.all.click&vd_source=1d648ac49599b97d15756703b195c451
/* Print(10) = Print(5) + 0
             = Print(2) + 1 + 0
             = Print(1) + 0 + 1 + 0
             = 1 + 0 + 1 + 0
            */

void Print(int number)
{
    if(number >= 2)
    {
        Print(number / 2);
    }
    printf("%d",number % 2); // 进入if后这句也同样会执行

}

int main()
{
    int number;
    printf("请输入一个整数，以获取其二进制:\n");
    scanf("%d",&number);
    printf("该数字的二进制为:");
    Print(number);
    printf("\n");
    system("pause");
    return 0;
}
