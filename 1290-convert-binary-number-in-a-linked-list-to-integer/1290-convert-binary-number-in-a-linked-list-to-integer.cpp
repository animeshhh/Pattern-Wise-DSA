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
    int getDecimalValue(ListNode* head) {
        ListNode *h1 = head;
        int ans = 0;
        while(h1 != nullptr)
        {
            ans = ans*2 + h1->val;
            h1 = h1->next;
        }
        return ans;
    }
};