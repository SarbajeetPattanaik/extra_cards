class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0){
            return 0;
        }

        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        int count_max=1;
        int count=1;
        for(auto it:mp){
            cout<<it.first<<" "<<it.second<<endl;
            int temp=it.first;
            if(mp.find(temp+1)!=mp.end()){
                count++;
            }
            else{
                count=1;
            }
            count_max=max(count_max,count);
        }

        return count_max;



        // return 0;
        
    }
};