class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcdarray;
        int n = nums.size();
        int mx = 0;
        long long sum = 0;
        for (int x : nums) {
            mx = max(mx, x);
            prefixGcdarray.push_back(gcd(x, mx));
        }
        sort(prefixGcdarray.begin(),prefixGcdarray.end());
        int i = 0;
        int m = prefixGcdarray.size();
        int j = m-1;
        while(i<j)
        {
            sum = sum + gcd(prefixGcdarray[i] , prefixGcdarray[j]);
            // 0 = 0 + ( 2 , 6)
            j--;
            i++;
        }
        return sum;      
    }
};