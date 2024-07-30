class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double max1 = LONG_MIN;
        double p=1;

        for(int i=0;i<nums.size();i++)
        {
          p*=nums[i];
          max1=max(p,max1);
          if(p==0)
           p=1;}
        p=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
          p*=nums[i];
          max1=max(p,max1);
          if(p==0)
           p=1;
        }
        return max1;
    }
};