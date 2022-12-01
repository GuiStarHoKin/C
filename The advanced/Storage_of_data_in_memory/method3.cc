#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = -128;
    char b = 128; // 127(max) + 1 -> -128
    printf("a = %u b = %u\n",a,b);
    system("pause");
    return 0;
}