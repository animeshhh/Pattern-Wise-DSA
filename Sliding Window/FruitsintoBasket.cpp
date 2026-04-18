//https://leetcode.com/problems/fruit-into-baskets/
class Solution {
public:
    int totalFruit(vector<int>& a) {
       unordered_map<int,int> f;
        int low = 0;
        int res = 0;

        for(int high = 0; high < a.size(); high++) {
            f[a[high]]++;

            while(f.size() > 2) {
                f[a[low]]--;
                if(f[a[low]] == 0) {
                    f.erase(a[low]);
                }
                low++;
            }

            res = max(res, high - low + 1);
        }

        return res;
    }
};