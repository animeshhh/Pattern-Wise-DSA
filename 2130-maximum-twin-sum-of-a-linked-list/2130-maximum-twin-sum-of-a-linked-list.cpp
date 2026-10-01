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
    int pairSum(ListNode* head) {
        long long int ans = INT_MIN;
        long long int twinSum = 0;
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast != nullptr && fast->next !=nullptr)
        {
            // cout<<slow->val<<" "<<fast->val<<endl;
            slow= slow->next;
            fast = fast->next->next;
        }
        // cout<<slow->val<<endl;
        ListNode *prev = NULL;
        ListNode *next = NULL;
        ListNode *curr = slow;
        while(curr != nullptr )
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode *left = head;
        ListNode *right = prev;
        while(left !=nullptr && right !=nullptr)
        {
            long long a=left->val;
            long long b=right->val;
            twinSum = a+b;
            // cout<<a<<" "<<b<<endl;
            ans = max(ans,twinSum);
            left = left->next;
            right = right->next;
        }
        return ans;
    }
};