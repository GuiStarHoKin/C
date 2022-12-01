#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 15;//00000000000000000000000000001101
    a = a | (1<<2);
    printf("%d\n",a);
    a = a & (~(1<<2));
    printf("%d\n",a);
    system("pause");
    return 0;
}