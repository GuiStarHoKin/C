#include <stdio.h>
#include <stdlib.h>

// 移除数组中的重复元素

int removeDuplicate(int* nums,int numSize)
{
    if(numSize == 0)
        return 0;
    int prve = 0;
    int cur = 1;
    int dst = 0;
    while(cur < numSize)
    {
        if(nums[prve] != nums[cur])
        {
            nums[dst] = nums[prve];
            prve++;
            cur++;
            dst++;
        }
        else
        {
            prve++;
            cur++;
        }
    }

    // cur越界前的prve
     nums[dst] = nums[prve];
     prve++;
     dst++;
    return dst;

}

int main()
{
    int nums[] = {1,1,2,2,2,2,3,3,4,5};
    int numSize = sizeof(nums) / sizeof(nums[0]);
    int ret = removeDuplicate(nums,numSize);
    int i;
    printf("去除重复项后的数组为:");
    for(i = 0;i < ret;i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}