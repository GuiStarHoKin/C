#include <stdio.h>
#include <stdlib.h>

int binary_search(int arry[],int n,int szlong)// 本质上arr是一个指针
{
    int left = 0;
    //int szlong = sizeof(arry)/sizeof(arry[0]);//64位平台指针为8,8/8==1,所以只能在外面求
    int right = szlong - 1;
    int mid = 0;
    while(left <= right)
    {
        mid = (left + right) / 2;
        if(arry[mid] < n)
        {
            left = mid + 1;
        }
        else if(arry[mid] > n)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arry[] = {1,2,3,4,5,6,7,8,9,10};
    int n;
    printf("请输入你想要寻找的数字:>");
    scanf("%d",&n);
    int szlong = sizeof(arry)/sizeof(arry[0]);
    int rest = binary_search(arry,n,szlong);//bug:arry传过去的仅仅是数组首元素的地址
    if(-1 == rest)// -1没有找到，else找到了
    {
        printf("对不起，没有找到该元素\n");
    }
    else
    {
        printf("找到了，该元素的下标为:%d\n",rest);
    }
    system("pause");
    return 0;
}