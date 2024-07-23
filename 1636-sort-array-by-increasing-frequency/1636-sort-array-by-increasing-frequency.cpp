class Solution {
public:
    static bool cmp(pair<int,int>&a,pair<int,int>&b){
        if(a.second==b.second){
            return b.first<a.first;
        }
        return a.second<b.second;
    }
    
    
    vector<int> frequencySort(vector<int>& nums) {
        
        map<int,int> mp;
        vector<pair<int,int>> temp;
        
        // for(int i=-100;i<=100;i++){
        //     mp
        // }
        
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        map<int,int>:: iterator it=mp.begin();
        
        for(it=mp.begin();it!=mp.end();it++){
            temp.push_back({it->first,it->second});
        }
        sort(temp.begin(),temp.end(),cmp);
        
        vector<int> results;
        
        for(auto it:temp){
            for(int i=0;i<it.second;i++){
            results.push_back(it.first);}
        }
        return results;
        
        
        
    }
};