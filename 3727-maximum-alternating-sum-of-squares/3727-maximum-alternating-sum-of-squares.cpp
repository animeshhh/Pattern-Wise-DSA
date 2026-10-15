class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long score = 0;
        //alt score = score = arr[0]2 - arr[1]2 ...;

        // return max score
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.rbegin(),nums.rend());
        int high = 0;
        int low = n-1;
        for(int i = 0; i< n; i++)
        {
            if(low <= high)
            {
                break;
            }
            // cout<<i<<" "<<high<<" "<<low<<endl;
            score+= nums[high] - nums[low];
            cout<<score<<endl;
            high++;
            low--;
        }
        // cout<<n%2 <<" "<<low<<" "<<high<<endl;
        if(n%2 != 0 && low == high)
        {
            // cout<<"wohoo"<<endl;
            score+=nums[low];
        }
        return score;
    }
};