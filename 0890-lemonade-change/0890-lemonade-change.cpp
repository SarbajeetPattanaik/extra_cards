class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        vector<int> freq(3,0);

        for(int i=0;i<bills.size();i++){
            if(bills[i]==20){
                if(freq[1]>=1 && freq[0]>=1){
                    freq[1]--;freq[0]--;
                }
                else{
                    if(freq[0]>=3){
                        freq[0]=freq[0]-3;
                    }
                    else{
                        return false;
                    }

                }
                
                freq[2]++;
            }
            else if(bills[i]==10){
                if(freq[0]>=1){freq[0]--;}
                else{
                    return false;
                }
                freq[1]++;
            }
            else{
                freq[0]++;
            }

            cout<<freq[0]<<" "<<freq[1]<<" "<<freq[2]<<endl;
        }
        return true;
        
    }
};