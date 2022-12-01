// 妙
#include <stdio.h>
#include <stdlib.h>

int Add(int x,int y)
{
    int z;
    z = x + y;
    return z;
}

int Sub(int x,int y)
{
    int z;
    z = x - y;
    return z;
}

int Mul(int x,int y)
{
    int z;
    z = x * y;
    return z;
}

int Div(int x,int y)
{
    int z;
    z = x / y;
    return z;
}

void menu()
{
    printf("*******************\n");
    printf("*** 1.add 2.sub ***\n");
    printf("*** 3.mul 4.div ***\n");
    printf("***    0.exit   ***\n");
    printf("*******************\n");
}

int main()
{
    int input;
    int x;
    int y;
    int (*pfArr[])(int,int) = {0,Add,Sub,Mul,Div};
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        int sz = sizeof(pfArr)/sizof(pfArr[0]);  
        /*
            for(i = 0;i < 5;i++)
            {
                printf("%p\n",pfArr[i]); 可以看出pfArr数组里面都是地址所以可以用sizeof求数量
            }
        */
        if(input >= 1 && input < sz)
        {
            printf("请输入两个操作数:>");
            scanf("%d%d",&x,&y);
            printf("%d\n",pfArr[input](x,y));
        }
        else if(input == 0)
        {
            printf("退出!\n");
        }
        else
        {
            printf("输入有误,请重新输入!\n");
        }
    }while(input);
    system("pause");
    return 0;
}