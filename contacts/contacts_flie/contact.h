#pragma once 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define MAX_NAME 20
#define MAX_GENDER 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3

enum Option
{
  EXIT,
  ADD,
  DEL,
  SEARCH,
  MODIFY,
  SHOW,
  SORT,
  SAVE
};

typedef struct PeoInfo
{
  char name[MAX_NAME];
  char gender[MAX_GENDER];
  int age;
  char tele[MAX_TELE];
  char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
  PeoInfo *date;
  int size;
  int capacity;
}Contact;

extern void InitContact(Contact *ps);
extern void AddContact(Contact *ps);
extern void ShowContact(const Contact *ps);
extern void DelContact(Contact *ps);
extern void SearchContact(const Contact *ps);
extern void ModifyContact(Contact *ps);
extern void DestroyContact(Contact *ps);
extern void SaveContact(const Contact *ps);
extern void LoadContact(Contact *ps);
