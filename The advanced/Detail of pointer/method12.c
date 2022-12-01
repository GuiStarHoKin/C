#include <stdio.h>
#include <stdlib.h>

// 函数指针

int Add(int x,int y)
{
    int z;
    z = x + y;
    return z;
}

int main()
{
    int (*pa)(int,int) = Add;
    printf("%p\n",Add);
    printf("%p\n",&Add);
    printf("%p\n",pa); // Add == &Add==pa==*pa
    printf("%d\n",(*pa)(2,3)); // 5
    printf("%d\n",pa(2,3));
    system("pause");
    return 0;
}