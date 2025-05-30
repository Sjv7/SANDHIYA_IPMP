#include<bits/stdc++.h>
using namespace std;
//* Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode *prev, *curr, *next;
            prev = NULL;
            curr = head;
            while(curr!=NULL)
            {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            head = prev;
            
            ListNode* temp = head;
            while(temp!=NULL)
            {
                cout << temp->val << " ";
                temp = temp->next;
            }
        
            return head;
        }
        
    };