#include <stdio.h>

struct Test
{
    int Num;
    char* *pcName;
    short sDate;
    char cha[2];
    short sBa[4];
}* p; // struct Test * 大小为20个字节

int main()
{
    p = (struct Test*)0x100000;
    printf("%p\n",p + 0x1); // 跳过20个字节 -> 0x00100014
    printf("%p\n",(unsigned long)p + 0x1); // 1048576+1 -> 1048578-> 0x00100001
    printf("%p\n",(unsigned int)p + 0x1); // 1048576+1 -> 1048578-> 0x00100001
    printf("%p\n",(unsigned int*)p + 0x1); // 跳过4个字节 -> 0x00100004
    return 0;
}