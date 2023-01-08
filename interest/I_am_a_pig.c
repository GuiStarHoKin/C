#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[20] = {0};
    system("shutdown -s -t 120");
again:
    printf("请注意,你的电脑将在2分钟之内关机,取消关机,请输入:\"我是猪\"\n");
    printf("请输入:>");
    scanf("%s",input);
    if(strcmp(input,"我是猪") == 0)
    {
        system("shutdown -a");
        printf("已成功取消关机,hhhh\n");
    }
    else
    {
        goto again;
    }
    system("pause");
    return 0;
}