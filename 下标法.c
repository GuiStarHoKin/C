#include <stdio.h>
float score[10] = {80,50,60,90,70,40,97,80,60,90};// 定义全局数组 
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

// 下标法及格率 
float PassingRate()
{
	float passing_rate;
	int i;
	int j = 0;
	for(i = 0 ; i <= 9 ; i++){
		if(score[i] >= 60){
			j++;
		}
	}
	passing_rate = j*1.00*100/10;
	return passing_rate;
}
// 下标法平均分
float AverageScore()
{	
	float sum = 0;
	int i;
	float a;
	float average;
	for(i = 0 ; i <= 9 ; i++){
		a = score[i];
		sum = a + sum;
	}
	average = sum*1.00/10.00;
	return average;
} 
 
