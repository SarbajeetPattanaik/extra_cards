class Solution {
public:
    int minSwaps(string s) {
        stack<char> s1;
        int c=0;//unbalance counter
        for(auto ch:s){
            if(ch=='[') s1.push(ch);
            else{
                if(s1.empty()==true){
                    c++;
                }
                else{
                    s1.pop();
                }
            }
        }

        // cout<<c;
        return(c+1)/2;
        
    }
};