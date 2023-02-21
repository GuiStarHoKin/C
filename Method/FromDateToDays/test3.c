#include<stdio.h>
int main(){
    int year, month, day;
    int md[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int res = 0;
    scanf("%d %d %d", &year, &month, &day);
    //check if run year
    if(year %4 == 0 && year % 100 != 0 || year % 40 == 0){
        md[1] = 29;
    }
    for(int i = 0; i < month - 1; i++){
        res = res + md[i];
    }
    res += day;
    printf("%d", res);
    return 0;
}