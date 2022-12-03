// 计算求和
// Sn = a + aa + aaa + aaaa

#include <stdio.h>

int main()
{
    int n;
    int num;
    int ret = 0;
    int sum = 0;
    int i;
    printf("请输入数字及次数:>");
    scanf("%d %d",&num,&n);
    // 2 22 222 2222 -> 2*10 + 2 (前一项*10+2)
    for(i = 0;i < n;i++)
    {
        ret = ret*10 + num;
        sum += ret;
    }
    printf("结果为:%d\n",sum);

}