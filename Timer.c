#include <stdio.h>
#include <stdlib.h>

// 定时器(输入时注意要为英文标点":"")

int main()
{
    int hour;
    int min;
    int time;
    printf("请按格式输入当前时间:xx:xx\n");
    scanf("%d:%d",&hour,&min);
    printf("请输入计时分钟:\n");
    scanf("%d",&time);
    hour = (hour + (min + time) / 60) % 24;
    min = (min + time) % 60;
    printf("%d分钟后的时间为:%02d:%02d\n",time,hour,min);
    system("pause");
    return 0;
}