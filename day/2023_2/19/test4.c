>#include <stdio.h> //printf
>#include <windows.h> //system("pause")
>#include <stdlib.h> //qsort

>int main()
>{
 int arr[] = {0, -1, 1, 9, 7, 3, 4, 6, 5, 8, 2, 10};
 int sz = sizeof(arr) / sizeof(arr[0]); // 求出数组长度
 int i = 0;

 printf("排序前:>");
 for (i=0; i<sz; i++)
 {
   printf("%d ", arr[i]);
 }
 
 qsort(arr, sz, sizeof(int), CompareInt); // 开始排序

 printf("\n排序后:>");
 for (i=0; i<sz; i++)
 {
   printf("%d ", arr[i]);
 }
 printf("\n");
 
 system("pause");
 return 0;
>}