#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0,a = 0,b = 2,c = 3,d = 4;
    i = a++ && ++b && d++; // && 左边为假右边不运算 P20 45:36 ,要注意先使用后加加，还是先加加后使用，先使用如果为0的话就不运算了(一假即假)
    //i = a++ || ++b || d++; // || 左边有一个为真后面全不算了(一真即真)
    printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);
    system("pause");
    return 0;
}