// 是否左旋来的字串
#include <stdio.h>
#include <string.h>
#include <assert.h>

int is_left_move(char *str1,char * str2)
{
    assert(str1 != NULL);
    assert(str2 != NULL);
    int len1;
    int len2;
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1 != len2) // 如果str1长度 ！= str2长度->一定不会是字串
    {
        return 0;
    }
    // 1.把str1追加到str1中
    strncat(str1,str1,len1);
    // 2.寻找是否为字串
    char *ret = strstr(str1,str2);
    if(ret == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int ret = 0;
    char arr1[] = "hello";
    char arr2[] = "elloh";
    ret = is_left_move(arr1,arr2);
    if(ret == 1)
    {
        printf("Yes!\n");
    }
    else
    {
        printf("No!\n");
    }
    return 0;
}