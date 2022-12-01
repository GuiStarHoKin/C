#include <stdio.h>
#include <stdlib.h>

void reverse(int arry[],int numSize)
{
    int left = 0;
    int right = numSize - 1;
    while(left <= right)
    {
        int temp;
        temp = arry[left];
        arry[left] = arry[right];
        arry[right] = temp;
        left++;
        right--;
    }
    
}

void print(int arry[],int numSize)
{
    int i;
    for(i = 0;i < numSize;i++)
    {
        printf("%d ",arry[i]);
    }
    printf("\n");
}

int main()
{
    int arry[] = {1,2,3,4,5,6,7,8,9,10};
    int numSize = sizeof(arry) / sizeof(arry[0]);
    printf("Reverse前的数组:");
    print(arry,numSize);
    reverse(arry,numSize);
    printf("Reverse后的数组:");
    print(arry,numSize);
    system("pause");
    return 0;
}