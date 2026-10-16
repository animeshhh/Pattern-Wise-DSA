class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
       string ans = "";
       while(num-- && num >= 0)
       {
            int digit = min(9, sum); // 
            // cout<<digit<<"i am digit"<<endl;
            ans += to_string(digit);
            // cout<<ans<<"i am the answer"<<endl;
            sum -= digit;
            // cout<<sum<<"i am sum"<<endl;
            
       }
       if (sum > 0) return "";
       return ans;
    }
};