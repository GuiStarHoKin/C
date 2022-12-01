#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("请输入:\n");
    while((ch = getchar()) != EOF)
    {
        if((ch < '0') || (ch > '9'))
        {
            continue;
        }
        else
        {
            putchar(ch);
            printf("\n");
        }
    }
    return 0;
}