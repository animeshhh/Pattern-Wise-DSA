class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;
        ListNode* fast = head;
        for(int i = 1; i < k; i++) {
            fast = fast->next;
        }

        first = fast;
        ListNode* second = head;

        while(fast->next != nullptr) {
            fast = fast->next;
            second = second->next;
        }
        swap(first->val, second->val);

        return head;
    }
};