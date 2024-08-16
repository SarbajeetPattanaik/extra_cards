class Solution {
public:
    int partitionString(string s) {
        int count=0;
        set<char>st;
        for(int i=0;i<s.size();i++){
            if(st.find(s[i])==st.end()) st.insert(s[i]);
            else{count++;
                st.clear();
                st.insert(s[i]);}
        }
        if(st.size()==s.size()) return 1;
        return count+1;
        
    }
};