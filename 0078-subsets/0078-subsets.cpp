class Solution {
public:

    void gen(vector<int> &temp,vector<int> &nums, int i, vector<vector<int>> &res){
       
        if(i==nums.size()){
            res.push_back(temp);
            return;
        }
        
        gen(temp,nums,i+1,res);
        temp.push_back(nums[i]);
        // res.push_back(temp);
        gen(temp,nums,i+1,res);
        temp.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> res;

        vector<int> temp;

        gen(temp,nums,0,res);

        return res;
        
    }
};