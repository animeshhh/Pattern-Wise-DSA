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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *h1 = headA;
        ListNode *h2 = headB;
        int skipA = 0;
        int skipB = 0;
        while(h1 != nullptr)
        {
            h1 = h1->next;
            skipA++;
        }
        while(h2 != nullptr)
        {
            h2 = h2->next;
            skipB++;
        }
        int gap = abs(skipA - skipB);
        h1=headA;
        h2=headB;
        while(h1 && h2 && gap--)
        {
            if(skipA > skipB)
            {
                h1 = h1->next;
            }
            else
            {
                h2 = h2->next;
            }
            
        }
        while(h1!=NULL && h2!=NULL){
            if(h1==h2)return h1;
            h1=h1->next;
            h2=h2->next;
        }
        return NULL;
    }
};