class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int s=0;
        int e=nums.size()-1;
        int mid=(s+e)/2;
        int l=-1,h=-1;

        while(s<=e){
            if(nums[mid]==target){
                l=mid;
                e=mid-1;
            }
            else if(target<nums[mid]){
                e=mid-1;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            mid=(s+e)/2;
        }
        s=l;
        if(l==-1){
            return {-1,-1};
        }
        e=nums.size()-1;
        mid=(s+e)/2;

        while(s<=e){
            if(nums[mid]==target){
                h=mid;
                s=mid+1;
            }
            else if(target<nums[mid]){
                e=mid-1;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            mid=(s+e)/2;
        }

        return {l,h};





        
    }
};