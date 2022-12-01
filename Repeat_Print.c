#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    while((ch = getchar()) != EOF)// EOF->ctrl + z 要注意(ch = getchar()),符号运算级问题,建议都加()
    {                             // EOF->End of File (-1)
        putchar(ch);
    }
    return 0;
}