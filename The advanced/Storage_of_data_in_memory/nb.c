#include <stdio.h>
#include <stdlib.h>
// P31 44:03
int main()
{
    int n = 9;
    float* pFloat = (float*)&n;
    printf("n的值为:%d\n",n);
    printf("*pFloat的值为:%f\n",*pFloat);

    *pFloat = 9.0;
    printf("num的值为:%d\n",n);
    printf("*pFloat的值为:%f\n",*pFloat);
    system("pause");
    return 0;
}