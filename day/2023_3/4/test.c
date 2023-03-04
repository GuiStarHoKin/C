#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int* SingleNumber(int *nums, int numsSize, int *returnSize)
{
    int ret = 0;
    int i = 0;
    int pos = 0;
    int num1 = 0;
    int num2 = 0;
    *returnSize = 2;
    int *arr = (int*)malloc(sizeof(int)*(*(returnSize)));
    for (i=0; i<numsSize; i++)
    {
        ret ^= nums[i];
    }
    
    for (i=0; i<32; i++)
    {
        if ((ret >> i) & 1 == 1)
        {
            pos = i;
            break;
        }
    }

    for (i=0; i<numsSize; i++)
    {
        if ((nums[i] >> pos) & 1 == 1)
        {
            num1 ^= nums[i];
        }
        else
        {
            num2 ^= nums[i];
        }
    }
    arr[0] = num1;
    arr[1] = num2;
    return arr;

}

int main()
{
    int nums[] = {4, 1, 4, 6};
    int returnSize = 0;
    int i = 0;
    int sz = 0;
    int *arr = NULL;
    sz = sizeof(nums) / sizeof(nums[0]);
    arr = SingleNumber(nums, sz, &returnSize);
    for (i=0; i<returnSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}