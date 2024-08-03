class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();
        vector<int> res;

        if(n==0||n==1){
            return res;
        }
        vector<int> left1(n,1),right1(n,0);
        left1[0]=1;
        for(int i=1;i<=n-1;i++){
            left1[i]=nums[i-1]*left1[i-1];
        }
        right1[n-1]=1;
        for(int i=n-2;i>=0;i--){
            right1[i]=nums[i+1]*right1[i+1];
        }
        for(int i=0;i<n;i++){
            res.push_back(left1[i]*right1[i]);
        }
        return res;
        
    }
};