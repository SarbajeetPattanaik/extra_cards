class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> nums(n1 + n2);
        
        int l = 0, r = 0, i = 0;

        // Merge the two sorted arrays
        while (l < n1 && r < n2) {
            if (nums1[l] < nums2[r]) {
                nums[i++] = nums1[l++];
            } else {
                nums[i++] = nums2[r++];
            }
        }

        // Copy remaining elements if any
        while (l < n1) {
            nums[i++] = nums1[l++];
        }
        while (r < n2) {
            nums[i++] = nums2[r++];
        }

        // Calculate the median
        int totalSize = n1 + n2;
        if (totalSize % 2 == 0) {
            return (nums[totalSize / 2 - 1] + nums[totalSize / 2]) / 2.0;
        } else {
            return nums[totalSize / 2];
        }
        
    }
};