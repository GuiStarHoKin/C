#include <stdio.h>
float score[10] = {80,50,60,90,70,40,97,80,60,90};// 定义全局数组 
float *p = score;
float PassingRate();
float AverageScore();
int main()
{	
	float passing_rate;
	float average;
	passing_rate = PassingRate();
	average = AverageScore();
	printf("及格率为：%.2f%%\n",passing_rate);
	printf("平均分为：%.2f",average);
	return 0;
}

// 指针变量指向数组元素法及格率 
float PassingRate()
{
	float passing_rate;
	int j = 0;
	while(p < score + 10){
		if(*p++ >= 60){
			j++;
		}
	}
	passing_rate = j*1.00*100/10;
	return passing_rate;
}
// 指针变量指向数组元素法平均分
float AverageScore()
{	
	float sum = 0;
	float a;
	float average;
	while(p < score + 10){
		a = *p++;
		sum = a + sum;
	}
	average = sum*1.00/10.00;
	return average;
} 
 
