#include <stdio.h>
#include <stdlib.h>

int main()
{
    char password[20];
    char confirm;
    char ch;
    printf("请输入密码:>\n");
    scanf("%s",password);// 输入缓冲区：123abg_A! AA134\n
    while((ch = getchar()) != '\n')
    {
        ;
    }
    printf("是否确认密码？('Y'\'N')\n");
    scanf("%c",&confirm);
    if('Y' == confirm)
    {
        printf("确认成功!\n");
    }
    else
    {
        printf("取消确认!\n");
    }
    system("pause");
    return 0;
}