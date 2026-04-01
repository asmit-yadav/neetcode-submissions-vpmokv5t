/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    int length(ListNode*head)
    {
        int l=0;
        while(head)
        {
            l+=1;
            head=head->next;
        }
        return l;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         int len = length(head);
       if(n == len)
        return head->next;

    ListNode* curr = head;

    for(int i = 0; i < len - n - 1; i++)
    {
        curr = curr->next;
    }

    curr->next = curr->next->next;

    return head;
    }
};
