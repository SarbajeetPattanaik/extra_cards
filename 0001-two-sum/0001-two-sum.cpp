class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
            map<int, int> mp;
            for (int i = 0; i < nums.size(); i++) {
                int num = nums[i];
                int ni = target - num;
                if (mp.find(ni) != mp.end()) {
                    return {mp[ni], i};
                }
                mp[num] = i;
            }
            return { -1, -1};
    }
};