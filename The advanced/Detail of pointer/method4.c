#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arry1[5] = {1,2,3,4,5};
    int (*pa)[5] = &arry1; // pa是指针数组，*pa指向的数组有5个元素，每个元素都是int类型

    char* arry2[5];
    char* (*pb)[5] = &arry2; // pb是指针数组，*pb指向的数组有5个元素，每个元素是char*
}