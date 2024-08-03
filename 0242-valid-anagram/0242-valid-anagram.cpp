class Solution {
public:
    bool isAnagram(string s, string t) {

        map <char,int> mp;
        map <char,int> mp1;

        if(s.size()!=t.size()){
            return false;
        }

        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=1;
            }
            else{
                mp[s[i]]=mp[s[i]]+1;
            }
        }
        for(int i=0;i<t.size();i++){
            if(mp1.find(t[i])==mp1.end()){
                mp1[t[i]]=1;
            }
            else{
                mp1[t[i]]++;
            }
        }

         for(int i=0;i<t.size();i++){
         
                if(mp[t[i]]!=mp1[t[i]]){
                    return false;
                }
            
        }
        return true;

    
        
    }
};