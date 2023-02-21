#include <stdio.h>

int main() {
    int year = 0;
    int month = 0;
    int day = 0;

    scanf("%d %d %d", &year, &month, &day);
    if ((year / year) >= 1 \
        && (year / year) < 10\
        &&(month>=1)\
        &&(month<=12)\
        &&(day>=1)\
        &&(day<=31)
        )
    {
        //先控制是否平闰年，再控制大小月，最后控制2月的具体天数

        //判断平闰年
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        {
            //闰年
            switch (month)
            {
                case 1:
                    day = day;
                    break;
                case 2:
                    day += 31;
                    break;
                case 3:
                    day += 31+29;
                    break;
                case 4:
                    day += 31+29+31;
                    break;
                case 5:
                    day += 31+29+31+30;
                    break;
                case 6:
                    day += 31+29+31+30+31;
                    break;
                case 7:
                    day += 31+29+31+30+31+30;
                    break;
                case 8:
                    day += 31+29+31+30+31+30+31;
                    break;
                case 9:
                    day += 31+29+31+30+31+30+31+31;
                    break;
                case 10:
                    day += 31+29+31+30+31+30+31+31+30;
                    break;
                case 11:
                    day += 31+29+31+30+31+30+31+31+30+31;
                    break;
                case 12:
                    day += 31+29+31+30+31+30+31+31+30+31+30;
                    break;
                default:
                    printf("输入有误,请重新输入!\n");
                    break;
            }
            printf("%d", day);
        }
        else
        {
            //平年
            switch (month)
            {
                case 1:
                    day = day;
                    break;
                case 2:
                    day += 31;
                    break;
                case 3:
                    day += 31+28;
                    break;
                case 4:
                    day += 31+28+31;
                    break;
                case 5:
                    day += 31+28+31+30;
                    break;
                case 6:
                    day += 31+28+31+30+31;
                    break;
                case 7:
                    day += 31+28+31+30+31+30;
                    break;
                case 8:
                    day += 31+28+31+30+31+30+31;
                    break;
                case 9:
                    day += 31+28+31+30+31+30+31+31;
                    break;
                case 10:
                    day += 31+28+31+30+31+30+31+31+30;
                    break;
                case 11:
                    day += 31+28+31+30+31+30+31+31+30+31;
                    break;
                case 12:
                    day += 31+28+31+30+31+30+31+31+30+31+30;
                    break;
                default:
                    printf("输入有误,请重新输入!\n");
                    break;
            }
            printf("%d", day);
        }
    }
    return 0;
}