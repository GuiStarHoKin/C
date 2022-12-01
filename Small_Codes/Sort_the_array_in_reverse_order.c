#include <stdio.h>
#include <stdlib.h>

void reverse(char* arry,int sz) // hokin nb!
{
    char* start = arry;
    char* end = arry + sz -1 ;
    while(start < end)
    {
        char temp = 0;
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int size(char* sz)
{
    int count = 0;
    while((*sz)!='\0')
    {
        count++;
        sz++;
    }
    return count;
}

int main()
{
    int i;
    char arry[] = "emoclew olleh";
    int sz = size(arry);
    reverse(arry,sz);
    for(i = 0;i < sz;i++)
    {
        printf("%c ",arry[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}