#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    short i;
    char pwd[20] = {0};
    char my_pwd[20] = "lemon1415926535";
    short count = 3;
    for(i = 0;i < 3;i++)
    {
        printf("请输入密码:\n");
        scanf("%s",pwd);
        if((strcmp(pwd,my_pwd) == 0))
        {
            printf("密码正确,登录成功!\n");
            break;
        }
        else
        {
            count--;
            printf("密码错误,你还有%d次输入密码的机会!\n",count);
        }
    }
    if(i == 3)
    {
        printf("机会已用完,程序已退出!\n");
    }
    system("pause");
    return 0;
}