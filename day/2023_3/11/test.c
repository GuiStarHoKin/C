#include <stdio.h>
#include <windows.h>

int main()
{
    char ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch < '0' || ch > '9')
        {
            continue;
        }
        else
        {
            putchar(ch);
            printf("\n");
        }
    }
    system("pause");
    return 0;
}