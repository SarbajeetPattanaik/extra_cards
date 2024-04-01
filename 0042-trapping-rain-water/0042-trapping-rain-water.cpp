class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();

        vector<int> preff(n,0);
        vector<int> suff(n,0);
        int p1=0;
        int p2=0;

        for(int i=0;i<n;i++){
            if(height[i]>p1){
                p1=height[i];
            }
            preff[i]=p1;
            cout<<preff[i]<<endl;
        }
        for(int i=0;i<n;i++){
            if(height[n-i-1]>p2){
                p2=height[n-i-1];
            }
            suff[n-i-1]=p2;
            
        }
        cout<<"suff"<<endl;
        for(auto x:suff){
            cout<<x<<endl;
        }
        int wat=0;
        for(int i=0;i<n;i++){
            wat+=min(preff[i],suff[i])-height[i];
        }
        return wat;
    }
};