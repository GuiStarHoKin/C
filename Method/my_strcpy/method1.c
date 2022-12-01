#include <stdio.h>
#include <stdlib.h>

void my_strcpy(char* dest,char* src,int count) // hokin nb
{
    int i;
    for(i = 0;i < count;i++)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int my_strlen(char* arry2)
{
    int count = 0;
    while(*arry2 != '\0')
    {
        count++;
        arry2++;
    }
    return count;
}

int main()
{
    char arry1[] = "############";
    char arry2[] = "bit";
    int count = my_strlen(arry2);
    my_strcpy(arry1,arry2,count);
    printf("%s\n",arry1);
    system("pause");
    return 0;
}