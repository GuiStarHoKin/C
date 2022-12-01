#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arry[],int numSize)
{
    int i;
    int j;
    for(i = 0;i < numSize-1;i++)
    {
        int flag = 1;
        for(j = 0;j < numSize - 1 - i;j++)
        {
            if(arry[j] > arry[j+1])
            {
                int temp;
                temp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = temp;
                flag = 0;

                // arry[j] = arry[j] + arry[j+1];
                // arry[j+1] = arry[j] - arry[j+1];
                // arry[j] = arry[j] - arry[j+1];
                // flag = 0;

                // arry[j] = arry[j]^arry[j+1];
                // arry[j+1] = arry[j]^arry[j+1];
                // arry[j] = arry[j]^arry[j+1];
                // flag = 0;

            }
        }
        if(1 == flag)
        {
            break;
        }
    }
}

int main()
{
    int arry[] = {1,4,7,8,5,2,9,6,3,0};
    int numSize = sizeof(arry) / sizeof(arry[0]);
    int i;
    printf("冒泡排序前的数组为:");
    for(i = 0;i < numSize;i++)
    {
        printf("%d ",arry[i]);
    }
    printf("\n冒泡排序后的数组为:");
    BubbleSort(arry,numSize);
    for(i = 0;i < numSize;i++)
    {
        printf("%d ",arry[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}