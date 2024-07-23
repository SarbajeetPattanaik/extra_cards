class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        
//         for(int i=0;i<k;i++){
            
//             // int temp=nums[nums.size()-1];
//             int temp=nums.back();
//             nums.pop_back();
//             nums.insert(nums.begin(),temp);
            
//         }
        
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        
        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
    }
};