class Solution {
public:
    int minOperations(vector<int>& nums) {
        int x=nums[0];
        int inc=0;
        int res=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                continue;
            }
            else{
                inc=nums[i-1]-nums[i];
                inc++;
                cout<<inc<<endl;
                nums[i]=nums[i]+inc;
                res+=inc;
            }
        }

        return res;
        
    }
};