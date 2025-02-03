class Solution {
public:
    int scoreOfString(string s) {
        int N = s.length();
        int total = 0;
        for (int i = 0; i < N-1; i++) {
            total += abs((int)s[i] - (int)s[i + 1]);
        }

        return total;
        
    }
};