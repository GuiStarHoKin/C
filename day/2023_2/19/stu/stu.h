#ifndef __STU_H__
#define __STU_H__

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#define MAX_ID 20
#define MAX_NAME 10


typedef struct student
{
  char id[MAX_ID];
  char name[MAX_NAME];
  int ChineseScore;
  int MathScore;
  int EnglishScore;
  int sum;
}student;

enum Option
{
  EXIT,
  ByName,
  ById,
  ByScore
};

extern void StuInit(student **stu, int n);
extern void StuDestory(student *stu);
extern void StuScanf(student **stu, int n);
extern void QsortByName(student **stu, int n);
extern void Print(student **stu, int n);
extern void QsortById(student **stu, int n);
extern void QsortByScore(student **stu, int n);

#endif