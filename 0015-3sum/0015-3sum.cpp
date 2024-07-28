class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>>res;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i!=0 && nums[i]==nums[i-1]){continue;}
            
            int j=i+1;
            int k=n-1;
            while(j<k){
                // vector<int> row1;
                int s=nums[i]+nums[j]+nums[k];
                if(s<0){
                    j++;
                }
                else if(s>0){
                    k--;
                }
                else{
                    vector<int> row1;
                    row1.push_back(nums[i]);
                    row1.push_back(nums[j]);
                    row1.push_back(nums[k]);
                    j++;k--;
                    res.push_back(row1);
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                    while(j<k&&nums[k]==nums[k+1]){
                        k--;
                    }
                }
            }
            
            
            
        }
        return res;
        
    }
};