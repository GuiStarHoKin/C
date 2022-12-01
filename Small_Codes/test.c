#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[] = {1, 2, 5, 6, 3};
    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    int ret = 1235;
    int n = ret;
    int sz2 = 0;
    while (n)
    {
        sz2++;
        n /= 10;
    }
    if (sz1 > sz2)
    {
        int i1 = sz1 - 1;
        int *p = (int *)malloc(sizeof(int) * (sz1 + 1));
        int j = 0;
        for (j = 0; j < sz1 + 1; j++)
        {
            p[j] = 0;
        }
        if (p == NULL)
        {
            perror(" ");
            return 0;
        }
        int m = 0;
        int i = 0;
        int a = sz1;
        while (a)
        {
            int num = arr1[i1] + (ret % 10) + m;
            if (num > 9)
            {
                num -= 10;
                p[i] = num;
                i++;
                m = 1;
                i1--;
                ret /= 10;
            }
            else
            {
                m = 0;
                p[i] = num;
                i++;
                i1--;
                ret /= 10;
            }
            a--;
        }
        if (p[i] != 0)
        {
            while (i >= 0)
            {
                printf("%d", p[i]);
                i--;
            }
        }
        else
        {
            while (i - 1 >= 0)
            {
                printf("%d", p[i - 1]);
                i--;
            }
        }
        free(p);
        p = NULL;
    }
    else
    {
        int i2 = sz1 - 1;
        int *p = (int *)malloc(sizeof(int) * (sz2 + 1));
        int j = 0;
        for (j = 0; j < sz2 + 1; j++)
        {
            p[j] = 0;
        }
        if (p == NULL)
        {
            perror(" ");
            return 0;
        }
        int m = 0;
        int i = 0;
        int a = sz2;
        int num = 0;
        while (a)
        {
            if (i2 < 0)
                num = 0 + (ret % 10) + m;
            else
                num = arr1[i2] + (ret % 10) + m;
            if (num > 9)
            {
                num -= 10;
                p[i] = num;
                i++;
                m = 1;
                i2--;
                ret /= 10;
            }
            else
            {
                m = 0;
                p[i] = num;
                i++;
                i2--;
                ret /= 10;
            }
            a--;
        }
        if (p[i] != 0)
        {
            while (i >= 0)
            {
                printf("%d", p[i]);
                i--;
            }
        }
        else
        {
            while (i - 1 >= 0)
            {
                printf("%d", p[i - 1]);
                i--;
            }
        }
        free(p);
        p = NULL;
    }
    system("pause");
    return 0;
}