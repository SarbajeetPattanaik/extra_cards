class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)if((nums[i]^nums[i+1])==0)ans=ans^nums[i];
        return ans;
        
    }
};