#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
// 表白神器 You make me happier than I ever thought I could be. I love you
int main()
{
    short left = 0;
    //char arr1[] = "Welcome to my world";
    //char arr2[] = "###################";
    char arr1[] = "You make me happier than I ever thought I could be. I love you!";
    char arr2[] = "###############################################################";
    short right = strlen(arr1) - 1;
    printf("%s\n",arr2);
    while(left <= right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n",arr2);
        Sleep(1000);// 1000ms == 1s;
        system("cls");// 清屏
        left++;
        right--;
    }
    printf("%s\n",arr2);
    system("pause");
    return 0;
}