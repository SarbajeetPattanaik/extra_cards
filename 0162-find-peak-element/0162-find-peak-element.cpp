class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int s=0;
        int e=nums.size()-1;

        int mid=(s+e)/2;

        while(s<e){
            if(nums[mid]<nums[mid+1]&& (mid+1)<nums.size()){
                s=mid+1;

            }
            else{
                e=mid;
            }
            mid=(s+e)/2;
        }

        return e;
        
    }
};