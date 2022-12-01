#include <stdio.h>
#include <stdlib.h>

void Print(int* p)
{
    (*p)++;// ++ 优先级比*要高，所以要加()
}

int main()
{
    int count = 0;
    int i;
    for(i = 0;i < 3 ;i++)
    {
        Print(&count);
        printf("count = %d\n",count);
    }
    system("pause");
    return 0;
}