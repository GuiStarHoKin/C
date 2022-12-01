#include <stdio.h>
#include <stdlib.h>

// 函数指针方便

void Print(char* str)
{
    printf("%s\n",str);
}

int main()
{
    void (*pa)(char*) = Print;
    (*pa)("hello world");
    system("pause");
    return 0;
}