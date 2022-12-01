#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int a;
    int b;
    int c;
    int max;
    printf("请输入3个数:\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a > b)&&(a >c))
    {
        max = a;
        if(b > c)
        {
            printf("%d,%d,%d\n",max,b,c);
        }
        else
        {
            printf("%d,%d,%d\n",max,c,b);
        }
    }
    else if((b > a)&&(b > c))
    {
        max = b;
        if(a > c)
        {
            printf("%d,%d,%d\n",max,a,c);
        }
        else
        {
            printf("%d,%d,%d\n",max,c,a);
        }
    }
    else if((c > a)&&(c > b))
    {
        max = c;
        if(a > b)
        {
            printf("%d,%d,%d\n",max,a,b);
        }
        else
        {
            printf("%d,%d,%d\n",max,b,a);
        }
    }
    else
    {
        printf("程式error!\n");
    }
    system("pause");
    return 0;
}
*/

int main()
{
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    // 算法实现，a中存放最大值，b次之，c中存放最小值
    if(a < b)
    {
        int temp; 
        temp = b; // 可以把大的放进temp，也可以把小的放进temp(两种不同的思维方式)
        b = a;
        a = temp;
    }
    if(a < c)
    {
        int temp;
        temp = c;
        c = a;
        a = temp;
    }
    if(b < c)
    {
        int temp;
        temp = c;
        c = b;
        b = temp;
    }
    printf("%d %d %d",a,b,c);
    system("pause");
    return 0;
}