class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int max1=*max_element(weights.begin(),weights.end());
        int sum1=accumulate(weights.begin(),weights.end(),0);

        int part=1;
        int s=max1,e=sum1;
        int mid=(s+e)/2;
        int n=weights.size();

        while(s<e){
            mid=(s+e)/2;

            int part=1;
            int sum1=0;
            int capacity=mid;
            for(int i=0;i<n;i++){
                sum1+=weights[i];
                if(sum1>capacity){
                    sum1=weights[i];
                    part++;
                }
            }
            // cout<<part<<" "<<capacity<<endl;
            // if(part==days){
            //     return capacity;
            // }
            // else 
            if(part<=days){

                // e=mid-1;
                e=mid;

            }
            else if(part>days){

                s=mid+1;
            }
            
        }

        return e;

        
    }
};