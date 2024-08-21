class Solution {
public:
    int findP(vector<int>&nums){
        
        int s=0;
        int e=nums.size()-1;
        int mid=(s+e)/2;

        while(s<e){

            if(mid+1<nums.size() && nums[mid]>nums[mid+1]){
                return mid;
            }

            if(mid-1>=0 && nums[mid-1]>nums[mid]){
                return mid-1;
            }
            if(nums[mid]>nums[s]){
                s=mid;
            }
            else{
                e=mid-1;
            }
            mid=(s+e)/2;

        }
        return s;
        
    }

    int bin_search(vector<int>&nums,int target,int s, int e){
        int mid=(s+e)/2;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        
            mid=(s+e)/2;
        }
            return -1;
    }
    int search(vector<int>& nums, int target) {
        int p_ind=findP(nums);
        int s=0;
        int e=nums.size();

        cout<<p_ind;
        if(nums[p_ind]==target){
            return p_ind;
        }
        int x=-1;
        if(p_ind-1>=0&&target>=nums[0] && target<=nums[p_ind-1]){
            x=  bin_search(nums,target,0,p_ind-1);
        }
        if(x==-1&&p_ind+1<e){
            return bin_search(nums,target,p_ind+1,e-1);
        }
        return x;
        


        

    }
};