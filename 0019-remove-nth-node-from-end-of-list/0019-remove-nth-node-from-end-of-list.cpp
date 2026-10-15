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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *h1 = head;
        int count = 0;
        while(h1 != nullptr)
        {
            count++;
            h1 = h1->next;
        }
        
        h1 = head;
        int x = count-n;
        if(x == 0)
        {
            return head->next;
        }
        cout<<x<<endl;
        for(int i = 0; i < x-1; i++)
        {
            h1 = h1->next;
        }
        cout<<h1->val<<endl;
        h1->next = h1->next->next;
        return head;
    }
};