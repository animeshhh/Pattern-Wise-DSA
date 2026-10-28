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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *v1 = head;
        ListNode *dummy = head->next;
        ListNode *prev = NULL;
        while(v1 != nullptr && v1->next !=nullptr)
        {
            ListNode *v2 = v1->next;
            ListNode *temp = v2->next;
            v2->next = v1;
            v1->next = temp;
            if (prev != nullptr) {
                prev->next = v2;
            }
            prev = v1;
            v1 = temp;
            
        }
        return dummy;
    }
};