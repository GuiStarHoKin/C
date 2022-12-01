#include <stdio.h>
#include <stdlib.h>
// 回调函数 qsort
void Print(char *str) // This is a Cell back  function
{
    printf("hehe:%s\n",str);
}

void test(void (*p)(char*))
{
    printf("This is a test statement\n");
    p("world");
}

int main()
{
    test(Print);
    system("pause");
    return 0;
}