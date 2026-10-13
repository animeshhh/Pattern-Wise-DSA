
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        vector<int> answer;
        ListNode* curr = head;

        while (curr != nullptr) {
            ans.push_back(curr->val);
            curr = curr->next;
        }
//  ans = 2-2-5
        int n = ans.size(); // n = 3
        int i = 0;
        int j = 1;

        while (i < n) {
            while (j < n && ans[i] >= ans[j]) {
                j++;
            }

            if (j < n) {
                answer.push_back(ans[j]);
            } else {
                answer.push_back(0);
            }

            i++;
            j = i + 1;
        }

        return answer;
    }
};
