/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        int count = 0;
        int f=-1;
        while ( fast != nullptr && fast->next != nullptr )
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                f=0;
                break;
            }
        }
        if(f==-1)return NULL;
        ListNode *h1 = head;
        while(h1 != nullptr)
        {
            
            if(h1 == fast)
            {
                return h1;
            }
            h1 = h1->next;
            fast= fast->next;
        }
        return NULL;
    }
};