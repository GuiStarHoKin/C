#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int i = 0;
    int num = 0;
    scanf("%d", &n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &num);
        arr[i] = num; 
    }
    for (i=0; i<n; i++)
    {
      printf("%d ", arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}