#include<stdio.h>
#include<stdlib.h>

struct ListNode {
       int val;
       struct ListNode *next;
   };

struct ListNode* head = NULL;
//free(head);
void Insert(int data)
{
    
    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val = data;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    struct ListNode* temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = newnode;
}
struct ListNode* addTwoNumbers(struct ListNode* p1, struct ListNode* p2) {
        // struct ListNode *res = (struct ListNode*)malloc(sizeof(struct ListNode));
        head =NULL;
        struct ListNode *curr = head;
        int c = 0, s = 0, num = 0;
        int a, b;
        while(p1 != NULL || p2!= NULL)
        {
            if(p1 != NULL)
            {
                a = p1->val;
                p1 = p1->next;
            }
            else
                a = 0;
            if(p2 != NULL)
            {
                b = p2->val;
                p2 = p2->next;
            }
            else
                b = 0;
        
        num = a + b + c;
        s = num % 10;
        c = num / 10;
        // curr->next = new ListNode(s);
        Insert(s);
        }
        if(c != 0)  Insert(c);

        return head;
}