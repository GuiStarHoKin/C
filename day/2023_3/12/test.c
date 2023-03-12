#include <stdio.h>
#include <windows.h>

void bin(int input)
{
    if (input >= 2)
    {
        bin(input/2);
    }
    printf("%d", input%2);
}

int main()
{
    int input = 0;
    printf("请输入:>");
    scanf("%d", &input);
    bin(input);
    system("pause");
    return 0;
}