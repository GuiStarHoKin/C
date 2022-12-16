// 1
/*
#include <stdio.h>
#include <assert.h>


int my_strlen(const char* str)
{
    assert(str);
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char arr[] = "hello";
    printf("%d\n",my_strlen(arr));
    return 0;
}*/

// 2
/*
#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)
{
    assert(str);
    if(*str != '\0')
    {
        str++;
        return 1 + my_strlen(str);
    }
    else
    {
        return 0;
    }
}

int main()
{
    char arr[] = "hello";
    printf("%d\n",my_strlen(arr));
    return 0;
}
*/

// 3.
#include <stdio.h>
#include <assert.h>

int my_strlen(char* str)
{
    assert(str);
    char* start = str;
    char* end = str;
    while(*end != '\0')
    {
        end++;
    }
    return end - start;
}

int main()
{
    char arr[] = "hello";
    printf("%d\n",my_strlen(arr));
    return 0;
}