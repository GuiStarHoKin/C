#include <stdio.h>
#include <stdlib.h>

int check_sys(void)
{
    int a = 1;
    char* p = (char*)&a;
    return *p;
}

int main()
{
    int ret;
    ret = check_sys();
    (ret == 1)?printf("小端\n"):printf("大端\n");// 1打印小端，0打印大端
    system("pause");
    return 0;
}