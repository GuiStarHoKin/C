#include <stdio.h>
#include <memory.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_GENDER 5
#define MAX_TELE 12
#define MAX_ADDR 20

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

struct PeoInfo
{
  char name[MAX_NAME];
  char gender[MAX_GENDER];
  char tele[MAX_TELE];
  char addr[MAX_ADDR];
  int age;
};

struct Contact
{
  struct PeoInfo data[MAX];
  int size;
};

void InitContact(struct Contact *ps);
void AddContact(struct Contact *ps);
void ShowContact(const struct Contact *ps);
void DelContact(struct Contact *ps);
void SearchContact(const struct Contact *ps);
void ModifyContact(struct Contact *ps);
