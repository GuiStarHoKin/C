#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1000];
    int i;
    for(i = 0;i < 1000;i++)
    {
        a[i] = -1-i;  // 考察圆环 -> -1->-128->127->1   128+127==255
    }
    printf("%d\n",strlen(a));
    system("pause");
    return 0;
}