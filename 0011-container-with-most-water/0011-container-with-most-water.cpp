class Solution {
public:
    int maxArea(vector<int>& height) {

        int max1=0;
        int n=height.size();
        int l=0,r=n-1;

        while(l<r){
            int temp=min(height[l],height[r])*(r-l);
            // cout<<l<<r<<height[l]<<height[r]<<temp<<endl;
            max1=max(max1,temp);
            if(height[l]<height[r]){
                l++;
            }
            else{r--;}

        }
        return max1;

        // vector<int> pref(n);
        // vector<int> suff(n);
        // // vector<pref

        // for(int i=0;i<height.size();i++){
        //     // cout<<i<<" "<<height[i]<<endl;
        //     if(height[i]>max1){
        //         max1=height[i];
        //     }
        //     pref[i]=max1;
        //     cout<<pref[i]<<endl;

        // }
        // cout<<"suff"<<endl;
        // max1=0;
        // for(int i=n-1;i>=0;i--){
        //     // cout<<i<<" "<<height[i]<<endl;
        //     if(height[i]>max1){
        //         max1=height[i];
        //     }
        //     suff[i]=max1;
        //     cout<<suff[i]<<endl;

        // }

        // return 0;
        
    }
};