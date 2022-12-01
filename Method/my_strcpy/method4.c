#include <stdio.h>
#include <stdlib.h>

void my_strcpy(char* dest,char* src)
{
    if(dest != NULL && src != NULL) // 为空指针则不干活
    {
        while(*dest++ = *src++)
        {
            ;
        }
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