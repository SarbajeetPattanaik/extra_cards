class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> res;
        int count=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
            {res.push_back(nums[i]);
            count++;
            }
        }
        
        for(int i=0;i<(nums.size()-count);i++){
            res.push_back(0);
        }
        
        nums.clear();
        for(int i=0;i<res.size();i++){
            nums.push_back(res[i]);
        }
        
        
    }
};