#include <stdio.h>
#include <stdlib.h>

int check_sys(void)
{
    int a = 1;
    return *(char*)&a; // 返回1为小端，返回0为大端
}

int main()
{
    int ret;
    ret = check_sys();
    if(1  == ret)
    {
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }
    system("pause");
    return 0;
}