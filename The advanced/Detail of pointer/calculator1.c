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
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        if(input != 0)
        {
            printf("请选择两个操作数:>");
            scanf("%d%d",&x,&y);
        }
        switch(input)
        {
            case 1:
                printf("%d\n",Add(x,y));
                break;
            case 2:
                printf("%d\n",Sub(x,y));
                break;
            case 3:
                printf("%d\n",Mul(x,y));
                break;
            case 4:
                printf("%d\n",Div(x,y));
                break;
            case 0:
                printf("退出!\n");
                break;
            default:
                printf("输入有误,请重新输入\n");
                break;
        }
    }while(input);
    system("pause");
    return 0;
}