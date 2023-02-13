#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define MAX_NAME 20
#define MAX_TEL 12
#define MAX_ADDR 30
#define MAX_GENDER 5
#define DEFAULT_SZ 3

typedef struct PeoInfo
{
  char name[MAX_NAME];
  char tel[MAX_TEL];
  char addr[MAX_ADDR];
  char gender[MAX_GENDER];
  int age;
}PeoInfo;

typedef struct Contact
{
  struct PeoInfo *data;
  int size; // 记录当前已经有的元素个数
  int capacity; //记录当前通讯录的最大容量
}Contact;

enum Option
{
  EXIT,
  ADD,
  DEL,
  SEARCH,
  MODIFY,
  SHOW,
  SORT
};

void InitContact(struct Contact *ps);
void AddContact(struct Contact *ps);
void DestroyContact(Contact *ps);
void ShowContact(const Contact *ps);
void DelContact(Contact *ps);
void SearchContact(const Contact *ps);
void ModifyContact(Contact *ps);
extern void SortContact(Contact *ps);