// 最妙，比2更妙
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

void Calc(int (*pf)(int,int))
{
    int x;
    int y;
    printf("请输入两个操作数:>");
    scanf("%d%d",&x,&y);
    printf("%d\n",pf(x,y));
}

int main()
{
    int input;
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                Calc(Add);
                break;
            case 2:
                Calc(Sub);
                break;
            case 3:
                Calc(Mul);
                break;
            case 4:
                Calc(Div);
                break;
            case 0:
                printf("退出!\n");
                break;
            default:
                printf("输入有误,请重新输入!\n");
                break;
        }
    }while(input);
    system("pause");
    return 0;
}