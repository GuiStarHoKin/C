#include <stdio.h>
int is_leap_year(int year) {
if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
return 1;
}

return 0;
}
int main()
{
int month_day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int year, month, day;
while (~scanf("%d %d %d", &year, &month, &day)) //scanf的返回值是正确输入的元素的个数，如果有正确输入的话，返回值大于等于1
{
int total_day = day;//先把当前月份天数加上
if (is_leap_year(year) && month > 2) { //若闰年，且月份大于2月，则在平年基础上+1
total_day += 1;
}
for (int i = month - 1; i > 0; i--) {
total_day += month_day[i];//向前累加每月的天数即可
}
printf("%d\n", total_day);
}
return 0;
}