#include <stdio.h>
#include <stdlib.h>
// 移除数组中的指定元素
int removeElement(int *nums, int numSize, int val)
{
    int src = 0;
    int dist = 0;
    while (src < numSize)
    {
        if (nums[src] != val)
        {
            nums[dist] = nums[src];
            src++;
            dist++;
        }
        else
        {
            src++;
        }
    }
    return dist;
}

int main()
{
    int nums[] = {3, 2, 2, 3};
    int val = 3;
    int ret;
    int numSize;
    numSize = sizeof(nums) / sizeof(nums[0]);
    ret = removeElement(nums, numSize, val);
    printf("新数组的长度为:%d\n", ret);
    system("pause");
    return 0;
}