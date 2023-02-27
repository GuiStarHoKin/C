#include <stdio.h>
#include <windows.h>

struct ListNode {
    int val;
    struct ListNode *next;
};



struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode *cur = head;
    struct ListNode *prev = NULL;
    while (NULL != cur)
    {
        // 1.头删
        // 2.prev中间删
        if (cur->val == val)
        {
            if (cur == head)
            {
                // 头删
                head = cur->next;
                free(cur);
                cur = head;
            }
            else
            {
                // prev删
                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            }
        }
        else
        {
            prev =  cur;
            cur = cur->next;
        }
    } // end-of-while
    
    return head;
}

int main()
{
    // 快速创建链表
    struct ListNode *n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *n4 = (struct ListNode*)malloc(sizeof(struct ListNode));

    n1->val = 7;
    n2->val = 7;
    n3->val = 7;
    n4->val = 7;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    removeElements(n1, 7);
    system("pause");
    return 0;
}