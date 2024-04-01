class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        
        int min = prices[0];
        for(int i=1; i< prices.size(); i++){
            if(prices[i] > min){
                res = max(res, prices[i] - min);
            }else{
                min = prices[i];
            }
        }

        return res;
        
        /*int ret=INT_MIN;
        for(int i=0;i<n;i++){
            int temp=(sf[i]-pf[i]);
            cout<<"pf"<<pf[i];
            cout<<" sf"<<sf[i]<<endl;
            if(temp>ret){
                ret=temp;
            }
        }*/
        //return ret;
    }
};