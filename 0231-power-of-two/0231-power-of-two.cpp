class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == INT_MIN) return false;
        if (n == 0) return 0;
        return !(n &(n-1)) ;
    }
};