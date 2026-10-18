class Solution {
public:
    bool checkValidString(string s) {
        bool ans = false;
        int n = s.size();
        int minOpen = 0;
        int maxOpen = 0;
        // ( , ) and *
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                minOpen++; // 1
                maxOpen++; // 1
            }
            if(s[i] == ')')
            {
                minOpen--;
                maxOpen--;
            }
            if(s[i] == '*')
            {
                minOpen--;
                maxOpen++;
            }
            if(maxOpen < 0)
            {
                return ans;
            }
            if(minOpen < 0)
            {
                minOpen = 0;
            }
        }
        return minOpen == 0;
    }
};