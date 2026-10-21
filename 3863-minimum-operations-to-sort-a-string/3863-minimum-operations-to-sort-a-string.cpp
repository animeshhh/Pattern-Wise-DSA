class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        string temp = s;
        sort(temp.begin(), temp.end());
        if (s == temp) {
            return 0;
        }
        char first = temp[0];
        char last = temp[n - 1];

        if (s[0] == first || s[n - 1] == last) {
            return 1;
        }
        else if (s[0] == last && s[n - 1] == first && n == 2) {
            return -1;
        }
        bool firsthalf = false;
        bool secondhalf = false;

        for (int i = 0; i < n - 1; i++) {
            if (s[i] == first)
                firsthalf = true;
        }

        for (int i = 1; i < n; i++) {
            if (s[i] == last)
                secondhalf = true;
        }

        if (!firsthalf && !secondhalf)
            return 3;

        return 2;
    }
};