#include <stdio.h>

int isleapyear(int year)
{
    if(0 == year%4)
    {
        if(0 == year%100 && 0 != year%400)
            return 0;
        else
            return 1;
    }
    else
        return 0;
}

int main()
{
    int daynum_of_leapyear[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int daynum_of_commonyear[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    int year,month,day;
    scanf("%d", &year);
    scanf("%d", &month);
    scanf("%d", &day);
    
    int daynum = 0;
    if(1 == isleapyear(year))
    {
        for(int i =0; i<month-1; i++)
        {
            daynum += daynum_of_leapyear[i];
        }
    }
    else
    {
        for(int i =0; i<month-1; i++)
        {
            daynum += daynum_of_commonyear[i];
        }
    }
    
    daynum += day;
    printf("%d",daynum);
    return 0;
}