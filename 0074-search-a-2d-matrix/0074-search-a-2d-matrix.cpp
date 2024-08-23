class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m=matrix.size();
        int n=matrix[0].size();

        int s=0;
        int e=m*n-1;
        int mid=s+(e-s)/2;

        while(s<=e){
            int ri=mid/n;
            int ci=mid%n;

            if(matrix[ri][ci]==target){
                return true;
            }
            if(matrix[ri][ci]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return false;
        
        
    }
};