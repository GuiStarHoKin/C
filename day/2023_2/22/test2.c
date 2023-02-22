#include <stdio.h>
#include <windows.h>


/**
 * 
 * @param rotateArray int整型一维数组 
 * @param rotateArrayLen int rotateArray数组长度
 * @return int整型
 */
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen )
{
    int min = rotateArray[0];
    int left = 0;
    int right = rotateArrayLen-1;
    while (left < right)
    {
        if (min > rotateArray[right])
        {
            min = rotateArray[right];
            right--;
        }
        else if (min > rotateArray[left])
        {
            min = rotateArray[left];
            left++;
        }
        else
        {
            left++;
            right--;
        }
    }
    return min;
}

int main()
{
  int arr[] = {1,2,3,1};
  int ret = 0;
  ret = minNumberInRotateArray(arr, 4);
  printf("%d\n", ret);
  system("pause");
  return 0;
}