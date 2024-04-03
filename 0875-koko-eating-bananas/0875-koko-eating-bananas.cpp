class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int n=piles.size();
        int min=INT_MAX,max=LLONG_MIN;
        for(auto x:piles){
            if(x>max){
                max=x;
            }
            if(x<min){
                min=x;
            }
        }
        cout<<min<<" "<<max<<endl;
        long long start=1,end=max;
        long long mid=1,ans=0;
        
        while(start<=end){
            mid=(start+ (end-start)/2);
            long long htemp=0;
            
            //mid=(start+end)/2;
            //cout<<mid<<" h "<<endl;
            for(int i=0;i<n;i++){
                //htemp+=ceil(double(piles[i])/double(mid));
                //cout<<htemp;
                 //htemp += (piles[i] + mid - 1) / mid;
                 htemp+=piles[i]/mid;
                 if(piles[i]%mid!=0){
                    htemp++;
                }
            }

            
            
            cout<<htemp<<endl;
            if(htemp==h){
                ans=mid;
                end=mid-1;
            }
            else if(htemp<h){
                end=mid-1;
                ans=mid;
            }
            else{
                start=mid+1;
            }

        }
        return (ans);
        
    }
};