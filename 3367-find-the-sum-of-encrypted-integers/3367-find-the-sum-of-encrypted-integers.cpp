class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {

        constexpr std::array<int, 5> mul = {0, 1, 11, 111, 1111};
        int sum = 0;

        for (int val : nums) {
            int digits = 0;
            int max_digit = 0;
            while (val > 0) {
                ++digits;
                max_digit = std::max(max_digit, val % 10);
                val /= 10;
            }
            sum +=  mul[digits] * max_digit;
        }

        return sum;
        
    }
};