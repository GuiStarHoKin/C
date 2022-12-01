#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 1;
    printf("%u\n",sizeof(c));
    printf("%u\n",sizeof(+c)); // +对C进行运算，发生整形提升
    printf("%u\n",sizeof(!c));
    system("pause");
    return 0;
}