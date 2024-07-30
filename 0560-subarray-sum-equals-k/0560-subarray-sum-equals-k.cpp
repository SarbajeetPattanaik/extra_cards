class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
    // map<int> mp;
        
        int n=nums.size();
        map<int,int> mp;
        // vector<long> pf;
        long s=0;
        int count=0;
        // mp[0]=1;
        // for(int i=0;i<nums.size();i++){
        //     s=s+nums[i];
        //     if(mp.find(s)!=mp.end()){
        //     mp[s]=1+mp[s];
        //     }
        //     else{
        //         mp[s]=1;
        //     }

        //     // pf.push_back(s);
        //     // if(s==k){
        //     //     count++;
        //     // }
            
        // }
        // for(auto i:mp){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        // cout<<"x-k"<<endl;
        long x=0;
        // int count
        for(int i=0;i<n;i++){
            x=x+nums[i];
            if(x==k){
                count++;
            }
            // cout<<x-k<<" "<<mp[x-k]<<endl;
            if(mp.find(x-k)!=mp.end()){count+=mp[x-k];}
            if(mp.find(x)==mp.end()){
                mp[x]=0;
            }
            mp[x]=mp[x]+1;

        }
        // // if(pf[0]==k){count=1;}
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         // if(pf[j]==k){
        //         //     cout<<i<<"-"<<j<<endl;
        //         //     count++;
        //         // }
        //         if((pf[j]-pf[i])==k){
        //             cout<<i<<" "<<j<<endl;
        //             count++;
        //             // if(pf[i]==0){
        //             //     count++;
        //             // }
        //         }
        //     }

        // }

        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         if((pf[i]-k)==pf[j]){
        //             count++;
        //         }
        //     }
        // }
        return count;
    }
};