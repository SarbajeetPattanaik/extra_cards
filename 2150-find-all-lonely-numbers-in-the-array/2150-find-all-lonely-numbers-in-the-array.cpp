class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int> mp;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
            mp[nums[i]]=1;}
            else{
                mp[nums[i]]++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1&&mp.find(nums[i]+1)==mp.end()&&mp.find(nums[i]-1)==mp.end()){
                res.push_back(nums[i]);
            }

        }
        return res;
    }
};