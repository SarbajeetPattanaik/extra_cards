class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {

        long long ls=0;
        long c1=0;

        long long sum1=0;
        // accumulate(nums.begin(),nums.end(),0);

        for(int i=0; i<nums.size(); i++) 
            sum1 += nums[i];

        for( int i=0;i<nums.size()-1;i++){
            ls =ls+nums[i];
            long long temp=sum1-ls;

            if(ls>=temp){
                c1++;

            }

        }

        return c1;
        
    }
};