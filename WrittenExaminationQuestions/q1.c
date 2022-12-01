#include <stdio.h>


int main()
{
    int arry[5] = {1,2,3,4,5};
    int *ptr = (int*)(&arry + 1);
    printf("%d,%d\n",*(arry + 1),*(ptr - 1));
    return 0;
}