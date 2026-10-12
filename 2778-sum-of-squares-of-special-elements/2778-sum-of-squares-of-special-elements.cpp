class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        vector<int> store;
        //special if  n % i == 0 ( basically even)
        // 
        for(int i = 0; i < n; i++)
        {
            int m=i+1;
            if(n % m==0)
            {
                  ans+=nums[i] * nums[i];
            }
        }
        return ans;
    }
};