#include <stdio.h>
float score[10] = {80,50,60,90,70,40,97,80,60,90};// ����ȫ������ 
float *p = score;
float PassingRate();
float AverageScore();
int main()
{	
	float passing_rate;
	float average;
	passing_rate = PassingRate();
	average = AverageScore();
	printf("������Ϊ��%.2f%%\n",passing_rate);
	printf("ƽ����Ϊ��%.2f",average);
	return 0;
}

// ָ�����ָ������Ԫ�ط������� 
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
// ָ�����ָ������Ԫ�ط�ƽ����
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
 
