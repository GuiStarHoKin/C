#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum;
    float i;
    int flag = 1;
    for(i = 1.0;i <= 100.0;i++)
    {
        sum += flag * (1.0 / i);
        flag = -flag;
    }
    printf("sum:%f\n",sum);
    system("pause");
    return 0;
}