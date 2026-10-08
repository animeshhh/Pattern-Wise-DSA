class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (head == nullptr || left == right)
            return head;

        ListNode dummy(0);
        dummy.next = head;

        // Find node before left
        ListNode* before = &dummy;

        for (int i = 1; i < left; i++) {
            before = before->next;
        }

        // First node of section
        ListNode* curr = before->next;

        // This will become the tail after reversal
        ListNode* tail = curr;

        // Normal reversal
        ListNode* prev = nullptr;

        for (int i = 0; i < right - left + 1; i++) {

            ListNode* next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;
        }

        // Connect left side
        before->next = prev;

        // Connect right side
        tail->next = curr;

        return dummy.next;
    }
};