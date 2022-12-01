#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* p = "hello"; // "hello"是一个常量字符串 // 内存中"hello\0"
    //*p = 'w'; // error
    printf("%c\n",*p);
    printf("%s\n",p);
    system("pause");
    return 0;
}