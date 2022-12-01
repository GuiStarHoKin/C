#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arry[],int sz)//优化最里层的for执行次数
{
    int i;
    int j;
    for(i = 0;i < sz - 1;i++) // 要比较元素个数-1(轮)
    {
        int flag = 1;// 假设这一趟都是有序的
        for(j = 0;j < sz - 1 - i;j++) // 每一轮要比较元素个数-1-轮(次)
        {
            if(arry[j] > arry[j + 1])
            {
                int temp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = temp;
                flag = 0;// 假如这一趟当中有某个元素要交换，那这一趟就是无序的就需要对这一趟进行检查
            }
        }
        if(1 == flag)
        {
            break;// 当全部趟数都是有序的时候进行break;
        }

    }
}

int main()
{
    int i;
    int arry[] = {1,4,7,8,5,2,9,6,3,0};
    int sz = sizeof(arry) / sizeof(arry[0]);
    printf("原数组:");
    for(i = 0;i < sz;i++)
    {
        printf("%d ",arry[i]);
    }
    printf("\n****************\n");
    BubbleSort(arry,sz);
    printf("排序后的数组:");
    for(i = 0;i < sz;i++)
    {
        printf("%d ",arry[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}