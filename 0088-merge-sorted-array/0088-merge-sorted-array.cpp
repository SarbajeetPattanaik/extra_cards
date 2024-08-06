class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     vector<int> v;
    //    for(int i = 0 ; i < n ; i++){
    //           if(nums1[i] > nums2[i]){
    //             v.push_back(nums2[i]);
    //           }
    //           else{
    //             v.push_back(nums1[i]);
    //           }
    //         }
    //     }

    int l=m-1,r=n-1;
    int end=m+n-1;
    while(l>=0&&r>=0){
        if(nums1[l]>nums2[r]){
            nums1[end]=nums1[l];
            l--;end--;
        }
        else{
            nums1[end]=nums2[r];
            r--;end--;
        }
    }

    while(r>=0){
        nums1[end]=nums2[r];
        r--;
        end--;
    }




    }
};