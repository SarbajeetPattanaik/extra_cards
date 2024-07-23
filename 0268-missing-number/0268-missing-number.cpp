class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // n=nums.size();
        int sum=0;
        int max=INT_MIN;
        int flag0=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
            if(nums[i]==0&&flag0==0){
                flag0=1;
            }
            sum+=nums[i];
        }
        cout<<max;
            
        int sum1=max*(max+1);
        sum1=sum1/2;
        if(sum1==sum){
            if(flag0==0){
                return 0;
            }
            return (max+1);
        }
        return (sum1-sum);
        
    }
};