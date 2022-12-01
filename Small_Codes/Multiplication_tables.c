#include <stdio.h>
#include <stdlib.h>

void print_table(int num)
{
    int i;
    int j;
    for(i = 1;i <= num;i++)
    {
        for(j = 1;j <= i;j++)
        {
            printf("%d X %d = %d\t",i,j,(i * j));
        }
        printf("\n");
    }
}

int main()
{
    int num;
    printf("请输入想生成的X乘X成法表e.g(12):>");
    scanf("%d",&num);
    print_table(num);
    system("pause");
    return 0;
}