class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }

        int res1=1,res2=1,res=1;

        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                res1++;
                res2=1;
            }
            else if(nums[i]<nums[i-1]){
                res2++;
                res1=1;
            }
            else{
                res1=1;
                res2=1;
            }

            res=max(res,max(res1,res2));


        }

        return res;
        
    }
};