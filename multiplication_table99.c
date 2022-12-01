#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int sum;
    // 确认打印9行
    for(i = 1;i <= 9;i++)
    {   // 分别打印每1行
        for(j =1;j <= i;j++)
        {
            sum = i * j;
            printf("%dX%d=%d\t",i,j,sum);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}