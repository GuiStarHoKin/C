#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
    int max;
    int i;
    max = arr[0];// 正副均支持，max = 0不支持负数，最大值会为max：0
    int szlong = sizeof(arr)/sizeof(arr[0]);
    for(i = 1;i < szlong;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("最大值为:%d\n",max);
    system("pause");
    return 0;
}