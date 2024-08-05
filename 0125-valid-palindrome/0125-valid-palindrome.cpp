class Solution {
public:
    bool isPalindrome(string s) {

        if(s==""){
            return true;
        }
        string s1;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                s1+=tolower(s[i]);
            }
        }
        cout<<s1;
        int j=s1.size()-1;
        for(int i=0;i<s1.size()/2;i++){
            if(s1[i]!=s1[j]){ 
                return false;
            }
            j--;
        }
        return true;
        
    }
};