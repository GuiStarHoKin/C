#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arry1[] = {1,3,5,7,9};
    int arry2[] = {2,4,6,8,0};
    int temp = 0;
    int i;
    int sz = sizeof(arry1) / sizeof(arry1[0]);
    printf("交换前的数组为:");
    for(i = 0;i < sz;i++)
    {
        printf("%d ",arry1[i]);
    }
    for(i = 0;i < sz;i++)
    {
        printf("%d ",arry2[i]);
    }
    for(i = 0;i < sz;i++)
    {
        temp = arry1[i];
        arry1[i] = arry2[i];
        arry2[i] = temp; 
    }
    printf("交换后的数组为:");
    for(i = 0;i < sz;i++)
    {
        printf("%d ",arry1[i]);
    }
    for(i = 0;i < sz;i++)
    {
        printf("%d ",arry2[i]);
    }
    system("pause");
    return 0;
    
}