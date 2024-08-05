class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // vector<int>&nums=numbers;

        int l=0;
        int r=numbers.size()-1;

        while(l<r){
            if(numbers[l]+numbers[r]==target){
                cout<<l<<" "<<r<<endl;
                return {l+1,r+1};
            }
            else if((numbers[l]+numbers[r])<target){
                l++;
            }
            else if((numbers[l]+numbers[r])>target){
                r--;
            }
        }

        return {-1,-1};
    //    return {l,r}; 
    }
};