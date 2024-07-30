class Solution {
public:
    int minimumDeletions(string s) {

        int l=s.length();
        vector<int>leftB(l,0);
        vector<int>rightA(l,0);

        int min1=INT_MAX;
        int lB=0,rA=0;
        // while(s[0]!='a'){
            
        // }
        leftB[0]=0;
        for(int i=1;i<l;i++){
            if(s[i-1]=='b'){
                lB++;
                
            }
            leftB[i]=lB;
        }

        rightA[l-1]=0;
        for(int i=l-2;i>=0;i--){
            if(s[i+1]=='a'){
                rA++;
                
            }
            rightA[i]=rA;
        }

        for(int i=0;i<l;i++){
            // cout<<leftB[i]<<" "<<rightA[i]<<endl;
            if((leftB[i]+rightA[i])<min1){
                min1=(leftB[i]+rightA[i]);
            }
        }

        return min1;

        
    }
};