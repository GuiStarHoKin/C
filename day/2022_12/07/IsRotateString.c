// kmp算法判断arr2是否是arr1旋转后的字串
#include <stdio.h>
#include <assert.h>
#include <string.h>

int is_left_move(char* str1,char * str2)
{
    assert(str1 != NULL);
    assert(str2 != NULL);
    // 1.在str1后面最加str1
    int len1;
    int len2;
    char* ret;
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1 != len2)
    {
        return 0;
    }
    strncat(str1,str1,len1);
    // 2.判断str2是否为str1的字串
    ret = strstr(str1,str2);
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
    char arry1[50] = "helloworld";
    char arry2[] = "elloworldh";
    ret = is_left_move(arry1,arry2);
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