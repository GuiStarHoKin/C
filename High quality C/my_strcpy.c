#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strcpy(char *dest,const char *src)
{
    char *ret = dest;
    assert(dest != NULL);
    assert(src != NULL);
    while(*dest++ = *src++)
    {
        ;
    }
    //return dest; 此时候dest的地址已经被++到'\0'了,所以返回值没办法输出
    return ret;
}

int main()
{
    char dest[] = "########";
    char src[] = "hello";
    //my_strcpy(dest,src);
    printf("%s\n",my_strcpy(dest,src));
    system("pause");
    return 0;
}