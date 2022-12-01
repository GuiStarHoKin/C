#include <stdio.h>
#include <stdlib.h>

int check_sys(void)
{
    int a = 1;
    char* p = (char*)&a;
    return (*p == 1)?1:0; // 小端返回1，大端返回0
}

int main()
{
    int ret;
    ret = check_sys();
    if(1 == ret)
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