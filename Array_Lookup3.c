#include <stdio.h>
#include <stdlib.h>

int LookUp(int n,int* p,int szlong)
{
    int left = 0;
    int right = szlong - 1;
    while(left <= right)
    {
        int mid = (right + left) / 2;
        if((*p + mid) > n) // 相当于把数组传过来了,p为元素首地址，*p首元素
        {
            right = mid - 1;
        }
        else if((*p + mid) < n)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    if(left > right)
    {
        return -1;
    }
}

int main()
{
    int n;
    int arry[] = {1,2,3,4,5,6,7,8,9,10};
    int szlong = sizeof(arry)/sizeof(arry[0]);
    printf("LookUp:>");
    scanf("%d",&n);
    int ret = LookUp(n,arry,szlong);
    if(ret >= 0)
    {
        printf("找到了,下标为:%d\n",ret);
    }
    else
    {
        printf("没有找到\n");
    }
    system("pause");
    return 0;
    
}