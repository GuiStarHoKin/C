// 3步逆序法
// abcdef->start
// bacdef
// bafedc
// cdefab

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// 逆序函数
void reverse(char* left,char* right)
{
    assert(left != NULL);
    assert(right != NULL);
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

void left_move(char* arr,int n)
{
    assert(arr != NULL);
    int len = strlen(arr);
    assert(n <= len);
    reverse(arr,arr+n-1);// 逆序左边
    reverse(arr+n,arr+len-1);// 逆序右边
    reverse(arr,arr+len-1);// 逆序整体
}

int main()
{
    int n;
    char arr[] = "abcdefg";
    printf("原数组:%s\n",arr);
    printf("请输入要左旋的位数:>");
    scanf("%d",&n);
    left_move(arr,n);
    printf("现数组:%s\n",arr);
    return 0;
}