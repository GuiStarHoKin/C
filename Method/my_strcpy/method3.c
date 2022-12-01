#include <stdio.h>
#include <stdlib.h>

void my_strcpy(char* dest,char* src)
{
    while(*dest++ = *src++) // '\0'也复制过去了，复制过去之后表达式为'\0'->ascii==0
    {
        ;
    }
}

int main()
{
    char arry1[] = "########";
    char arry2[] = "bit";
    my_strcpy(arry1,arry2);
    printf("%s\n",arry1);
    system("pause");
    return 0;
}