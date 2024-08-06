class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // string s1="";
        // string min1="";
        // min1+=(s[0]);

        // for(int i=1;i<s.size();i++){
        //     if(s[i]==s[i-1]){
        //         min1="";
        //         min1+=s[i];
        //     }
        //     else{
        //         min1+=s[i];
        //         if(min1.size()>s1.size()){
        //             s1=min1;
        //         }
        //     }
        // }

        // return s1.size();


        //sliding window
        int l=0,r=0;
        int n=s.size();
        unordered_map <char,int> mp;
        int len_max=0;
        while(r<n){
            if(mp.find(s[r])==mp.end()){
                mp[s[r]]=r;
                cout<<l<<" "<<r<<endl;
                // r++;
                len_max=max(len_max,r-l+1);
                r++;
            }
            else{
                int temp=mp[s[r]];
                if(temp>=l){
                    l=temp+1;
                }
                mp[s[r]]=r;
                len_max=max(len_max,r-l+1);
                r++;
            }
        }

        return len_max;
        
    }
};