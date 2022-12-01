#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
    printf("************************开始游戏:>1\t退出游戏:>0************************\n");
}

void game()
{   
    //rand:0-MAX_XXX
    // time_t 转到定义，tydef __int__32 tydef long
    int ret;
    int guess;
    ret = (rand()%100) + 1;// int rand(void)会产生伪随机数,需要srand产生随机数，%100 限制产生的数为0-99，%10限制产生的数为0-9
    while(1)
    {
        printf("请输入1-100之间的数:>");
        scanf("%d",&guess);
        if(ret > guess)
        {
            printf("猜小了!\n");
        }
        else if(ret < guess)
        {
            printf("猜大了!\n");
        }
        else
        {
            printf("恭喜你,猜对了!\n");
            break;
        }
    }
}

int main()
{
    int input;
    // srand需要放在此处，因为放在此处srand的生命周期为整个程序的生命周期
    srand((unsigned int)time(NULL));// void srand(unsigned int _seed),srand(i),i需要时刻变化(时间戳)，否则srand固定，rand固定
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch(input) // 同一条件，不同结果switch语句
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("输入有误,请重新输入\n");
                break;
        }
    }while(input);
    system("pause");
    return 0;
}