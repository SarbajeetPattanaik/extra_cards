class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        
        for(auto i:nums){
            s.insert(i);
            // cout<<i;
        }
        cout<<s.size();
        
        nums.clear();
        
        set<int>::iterator it=s.begin();
        
        for(it=s.begin();it!=s.end();it++){
            nums.push_back(*it);
        }
        
        return s.size();
        
    }
};