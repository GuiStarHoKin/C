#include <stdio.h>
#include <stdlib.h>

int CountNumber(int number)
{
    int i;
    int j;
    int m = number;// m 用于switch语句中
    int a = 0;// 0
    int b = 0;// 1
    int c = 0;// 2
    int d = 0;// 3
    int e = 0;// 4
    int f = 0;// 5
    int g = 0;// 6
    int h = 0;// 7
    int k = 0;// 8
    int l = 0;// 9
    for(i = 1;number >= 10;i++) // 得出输入的整数的个数存放在i中
    {
        number /= 10;// 每次去掉个位数,每去一次i++，最多只能去len(number)-1次
    }
    for(j = 0;j < i;j++)//获取i次每个数的个位数
    {
       /* 
        if(m % 10 == 0) // 此处只有1种情况进去，所以用if，else if结构
        {
            a++;
        }
        else if(m % 10 == 1)
        {
            b++;
        }
        else if(m % 10 == 2)
        {
            c++;
        }
        else if(m % 10 == 3)
        {
            d++;
        }
        else if(m % 10 == 4)
        {
            e++;
        }
        else if(m % 10 == 5)
        {
            f++;
        }
        else if(m % 10 == 6)
        {
            g++;
        }
        else if(m % 10 == 7)
        {
            h++;
        }
        else if(m % 10 == 8)
        {
            k++;
        }
        else if(m % 10 == 9)
        {
            l++;
        }
        */
        switch(m % 10) // switch语句代替if else if结构更为简洁
        {
            case 0:
                a++;
                break;
            case 1:
                b++;
                break;
            case 2:
                c++;
                break;
            case 3:
                d++;
                break;
            case 4:
                e++;
                break;
            case 5:
                f++;
                break;
            case 6:
                g++;
                break;
            case 7:
                h++;
                break;
            case 8:
                k++;
                break;
            case 9:
                l++;
                break;
            default:
                break;
        }
        
        m /= 10;// 每次去掉一个数再% eg:1008 % 10 == 8,100 % 10 == 0
    }
    
    if(a != 0 )
    {
        printf("0:%d\n",a);
    }
    // else if(b !=) 此处可能同时出现多种情况，不可用if else if 结构,只能用if并列结构
    if(b != 0)
    {
        printf("1:%d\n",b);
    }
    if(c != 0)
    {
        printf("2:%d\n",c);
    }
    if(d != 0)
    {
        printf("3:%d\n",d);
    }
    if(e != 0)
    {
        printf("4:%d\n",e);
    }
    if(f != 0)
    {
        printf("5:%d\n",f);
    }
    if(g != 0)
    {
        printf("6:%d\n",g);
    }
    if(h != 0)
    {
        printf("7:%d\n",h);
    }
    if(k != 0)
    {
        printf("8:%d\n",k);
    }
    if(l != 0)
    {
        printf("9:%d\n",l);
    }
    return 0;
}

int main()
{
    int number;
    printf("请输入一串整数:\n"); // 小数不支持
    scanf("%d",&number);
    CountNumber(number);
    system("pause");
    return 0;
}