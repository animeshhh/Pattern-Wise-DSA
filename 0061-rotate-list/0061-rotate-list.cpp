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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* h1 = head;
        int totalNodes = 1;

        while (h1->next != nullptr) {
            totalNodes++;
            h1 = h1->next;
        }

        k %= totalNodes;
        if (k == 0) return head;

        int totalNodesMinusK = totalNodes - k;
        ListNode* curr = head;

        while (totalNodesMinusK > 1) {
            curr = curr->next;
            totalNodesMinusK--;
        }

        ListNode* newHead = curr->next;
        curr->next = nullptr;
        h1->next = head;

        return newHead;
    }
};