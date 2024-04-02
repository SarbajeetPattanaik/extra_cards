class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> h1,h2;
        int sl=s.size();
        int tl=t.size();

        if(sl!=tl){
            return false;
        }
        for(int i=0;i<sl;i++){
            if(h1.find(s[i])==h1.end()){
            h1[s[i]]=t[i];
            }
            else if(h1[s[i]]!=t[i]){
                return false;
                cout<<h1[s[i]]<<" "<<t[i];
            }

            if(h2.find(t[i])==h2.end()){
            h2[t[i]]=s[i];
            }
            else if(h2[t[i]]!=s[i]){
                return false;
                cout<<h2[t[i]]<<" "<<s[i];
            }

        }

        return true;
    }
};