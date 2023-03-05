#include <stdio.h>
#include <windows.h>
#include <stdlib.h>



struct ListNode
{
    int val;
    struct ListNode *next;
};


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode *head = NULL;
    struct ListNode *tail = NULL;


    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            if (head == NULL)
            {
                head = list1;
                tail = list1;
                list1 = list1->next;
            }
            else
            {
                tail->next = list1;
                tail = tail->next;
                list1 = list1->next;
            }
        }
        else
        {
            if (head == NULL)
            {
                head = list2;
                tail = list2;
                list2 = list2->next;
            }
            else
            {
                tail->next = list2;
                tail = tail->next;
                list2 = list2->next;
            }
        }
    }//end-while

    if (head != NULL)
    {
        if (list1 != NULL)
        {
            tail->next = list1;
            tail = tail->next;
        }
        else
        {
            tail->next = list2;
            tail = tail->next;
        }
    }
    else
    {
        if (list1 == NULL)
        {
            return list2;
        }
        else
        {
            return list1;
        }
    }

    return head;
}

int main()
{
    struct ListNode *l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
     
    int i = 0;
    int sz = 0;
    sz = ( sizeof(l1) / sizeof(l1[0]) ) + ( sizeof(l2) / sizeof(l2[0]));
    int *arr = NULL;
    arr = mergeTwoLists(l1, l2);
    for (i=0; i<sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}