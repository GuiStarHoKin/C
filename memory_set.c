#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr1[] = "hello world";
    memset(arr1,'*',5); // '*'在传参的时候是以ASCII值，int类型传递过去的
    printf("%s\n",arr1);
    system("pause");
    return 0;
}