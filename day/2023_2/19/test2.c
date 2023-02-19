#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
typedef struct student  //结构体类型
{
	int id;        //成绩
	char name[10]; //姓名
	int grade;     //学号
}student;          // 结构体变量
 
int cmp1(const void* a, const void* b)//一级排序 ：对学生成绩整体从小到大排序
{
	student* s1 = (student*)a;          //指针强制转换为 结构体指针
	student* s2 = (student*)b;
	return s1->id - s2->id;
}
 
int cmp2(const void* a, const void* b)//二级排序：对相同成绩的学生，按照姓名进行排序
{
	student* s1 = (student*)a;
	student* s2 = (student*)b;
	if (strcmp(s1->name, s2->name) != 0)
		return strcmp(s1->name, s2->name);
	else
		return s1->id - s2->id;
}
 
int cmp3(const void* a, const void* b)//三级排序 ：对相同成绩、姓名的学生，按照学号进行排序
{
	student* s1 = (student*)a;
	student* s2 = (student*)b;
	if (s1->grade != s2->grade)
		return s1->grade - s2->grade;
	else
	{
		if (strcmp(s1->name, s2->name) != 0)
			return strcmp(s1->name, s2->name);
		else
			return s1->id - s1->id;
	}
}
 
int main()
{
	int i, N, C;
	scanf("%d %d", &N, &C);
 
	student* stu;
	stu = (student*)malloc(N * sizeof(student));
 
	for (i = 0; i < N; i++)
		scanf("%d %s %d", &stu[i].id, stu[i].name, &stu[i].grade);
	switch (C)
	{
	case 1:	qsort(stu, N, sizeof(student), cmp1); break;//一级排序
	case 2:	qsort(stu, N, sizeof(student), cmp2); break;//二级排序
	case 3:	qsort(stu, N, sizeof(student), cmp3); break;//三级排序
	}
	printf("排序结果:\n");
	for (i = 0; i < N; i++)
		printf("%03d %s %d\n", stu[i].id, stu[i].name, stu[i].grade);
	return 0;
}