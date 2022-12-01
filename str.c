#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr1[] = "hello";
    char arr2[] = "###########";
    strcpy(arr2,arr1);// arr1中的'\0'也会复制到arr2中去
    printf("arr1:%s\n",arr1);
    printf("arr2:%s\n",arr2);
    system("pause");
    return 0;
}