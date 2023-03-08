/* #include <stdio.h>
#include <windows.h>

int main()
{
    int ret = 0;
    int i = 0;
    int flag = 1;
    for (i=1; i<=1000; i++)
    {
        ret += flag * i;
        flag *= -1;
    }
    printf("ret:%d\n", ret);
    system("pause");
    return 0;
} */

#include <stdio.h>
#include <windows.h>

int main()
{
    char ch = 0;
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    system("pause");
    return 0;
}