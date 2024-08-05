class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        int n=arr.size();
        // int 
        // unordered_set<string> s;
        // map<string,vector<int>(2,0)> mp;
        // vector<string> arr;
        // vector
        map<string, int> mp;

        for(int i=0;i<n;i++){
            // s.insert(arr[i]);
            if(mp.find(arr[i])==mp.end()){
                // vector<int> &ref=mp[arr[i]];
                // mp[arr[i]]=vector<int>(2, 0);
                // ref.push_back(1);
                // mp[arr[i]][0]=1;
                // mp[arr[i]][1]=i;
                mp[arr[i]]=1;

            }
            else{
            mp[arr[i]]++;}
        }

        vector<string> res1;

        for(int i=0;i<n;i++){

            if(mp[arr[i]]==1){
                // mp[arr[i]][1]=j;
                res1.push_back(arr[i]);

            }

        }
        if(res1.size()<k){
            return "";
        }
        return res1[k-1];


        // int j=0;
        // for(auto it:mp){
            
        //     if(it.second[0]==1){
        //     // j++;
        //     cout<<it.first<<" "<<j<<" "<<k<<endl;
        //     if(it.second[1]==k){
        //         return it.first;
        //     }
        //     }
        // }
        return "";



    }
};