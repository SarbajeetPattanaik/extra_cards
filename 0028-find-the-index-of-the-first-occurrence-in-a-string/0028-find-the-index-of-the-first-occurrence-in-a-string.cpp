class Solution {
public:
    int strStr(string haystack, string needle) {
        int l=0;
        int n=needle.size();
        int ind=-1,ind_temp=-1;
        for(int i=0;i<haystack.size();i++){
            if(needle[l]==haystack[i]){
                if(ind==-1){
                    ind=i;
                }
                l++;
                 if(l==n){
                return ind;            }
            }
            else{
                if(ind!=-1){i=ind;}
                ind =-1;
                l=0;
            }

            

           

        }
        return -1;
        
    }
};