class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int ls=0,sum1=0;       // vector<int> sf(nums.size()-1,0);
        sum1=accumulate(nums.begin(),nums.end(),0);

        for( int i=0;i<nums.size();i++){
            if(ls==sum1-ls-nums[i]){
                return i;
            }

            ls=ls+nums[i];
        }

        return -1;
        
    }
};