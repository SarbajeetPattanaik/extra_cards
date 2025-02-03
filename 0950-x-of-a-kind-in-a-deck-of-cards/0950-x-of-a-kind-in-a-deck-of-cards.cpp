class Solution {
public:
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    bool hasGroupsSizeX(vector<int>& deck) {

        unordered_map<int,int> mp;
        for(int i=0;i<deck.size();i++)
        {
            mp[deck[i]]++;
        }
        int res=0;
        for(auto pr:mp)
        {
            res=gcd(pr.second,res);
        }
        return res>=2;
        
    }
};