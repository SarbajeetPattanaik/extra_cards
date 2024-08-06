class Solution {
public:
    static bool cmp(pair<char,int>a,pair<char,int>b){
        return a.second>b.second;
    }

    int minimumPushes(string word) {
        map <char,int> mp;
        for(int i=0;i<word.size();i++){
            mp[word[i]]++;
        }

        vector<pair<char,int>> mp1(mp.begin(),mp.end());

        sort(mp1.begin(),mp1.end(),cmp);
        int cost=1;
        int totalcost=0;
        int i=0;
        for(auto x:mp1){
            // cout<<x.first<<" "<<x.second<<endl;
            // i++;
            if(i==8){
                i=0;
                cost++;
            }
            totalcost+=x.second*cost;
            i++;
        }

        return totalcost;

        

        return 0;
        
    }
};