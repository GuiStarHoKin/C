#include <stdio.h>
#include <stdlib.h>

int  main()
{
    char a;
    short b;
    int c;
    long d;
    long long e;
    float f;
    double g;
    printf("1Byte==8bit\n");
    printf("char类型字节数:%d\n",sizeof(a)); // 1; -2^7 ~ (2^8)-1
    printf("short:%d\n",sizeof(b));// 2; -2^15 ~ (2^16)-1
    printf("int:%d\n",sizeof(c));// 4; -2^31 ~ (2^32)-1
    printf("long:%d\n",sizeof(d));// 4;
    printf("long long:%d\n",sizeof(e)); // 8
    printf("float:%d\n",sizeof(f)); // 4
    printf("double:%d\n",sizeof(g));// 8
    system("pause");
    return 0;
}