#include <stdio.h>
#include <stdlib.h>

int check_sys(void)
{
    int a = 1;
    char* p = (char*)&a;
    if(*p == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int ret;
    ret = check_sys(); // 1为小端，0为大端
    if(ret == 1)
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