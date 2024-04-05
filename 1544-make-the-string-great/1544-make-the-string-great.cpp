class Solution {
public:
    string makeGood(string s) {
        
        int n=s.size();
        string s2="";
        int i=0;
        for(i=0;i<n;i++){
            if(i<n-1 && toupper(s[i])==s[i+1]&&islower(s[i])){
                i++;
                continue;
            }
            else if(i<n-1 &&s[i]==toupper(s[i+1])&&islower(s[i+1])){
                i++;
                continue;
            }
            else{
            s2+=s[i];}
            
        }
    
        cout<<s2;
        
        if(n==s2.size()){
            return s2;
        }
        return makeGood(s2);
        
        
    }
};