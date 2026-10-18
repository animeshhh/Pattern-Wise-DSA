
class Solution {
public:
    bool isValid(string s) {
        bool ans = false;
        int n = s.size();
        stack<char> st;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(st.empty())
                {
                    return ans;
                }

                if((s[i] == ')' && st.top() != '(') ||
                   (s[i] == '}' && st.top() != '{') ||
                   (s[i] == ']' && st.top() != '['))
                {
                    return ans;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};
