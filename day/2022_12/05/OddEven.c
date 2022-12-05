// 调整数组使奇数全部位于偶数前面
#include <stdio.h>
#include <stdlib.h>

void Print(int arry[],int sz)
{
    int i;
    for(i = 0;i < sz;i++)
    {
        printf("%d ",arry[i]);
    }
    printf("\n");
}

void Move(int arry[],int sz)
{
    int left = 0;
    int right = sz - 1;
    while(left < right)
    {
        // 1.左边找偶数
        while((left < right) && (arry[left] % 2 == 1))
        {
            left++;
        }
        // 2.右边找奇数
        while((left < right) && (arry[right] % 2 == 0))
        {
            right--;
        }
        if(left < right)
        {
            int temp;
            temp = arry[left];
            arry[left] = arry[right];
            arry[right] = temp;
        }
    }
}

int main()
{
    int arry[] = {1,4,7,8,5,2,9,6,3,0,10};
    int sz = sizeof(arry) / sizeof(arry[0]);
    printf("原数组:\n");
    Print(arry,sz);
    Move(arry,sz);
    printf("现数组:\n");
    Print(arry,sz);
    return 0;
}