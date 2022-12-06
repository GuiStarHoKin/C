// 判断是不是左旋得来的
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <string.h>

void reverse(char* left,char* right)
{
    assert(left != NULL);
    assert(right != NULL);
    int i;
    while(left < right)
    {
        char tmp;
        tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void left_reverse(char* arr,int n)
{
    assert(arr != NULL);
    int len = strlen(arr);
    assert(n <= len);
    reverse(arr,arr+n-1);// 左逆序
    reverse(arr+n,arr+len-1);// 右逆序
    reverse(arr,arr+len-1);// 全逆序
}

int is_reverse(char* arr1,char* arr2)
{
    assert(arr1 != NULL);
    assert(arr2 != NULL);
    int i;
    int len = strlen(arr1);
    for(i = 0;i < len;i++)
    {
        left_reverse(arr1,1);
        int ret = strcmp(arr1,arr2);
        if(ret == 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int ret = 0;
    char arr1[] = "abcdefg";
    char arr2[] = "defgabc";
    ret = is_reverse(arr1,arr2);
    if(ret == 1)
    {
        printf("Yes!\n");
    }
    else
    {
        printf("No!\n");
    }
}