class Solution {
public:
    int mySqrt(int x) {

        int s=0;
        int e=x;
        int mid=s+(e-s)/2;
        while(s<=e){
            if((long)mid*mid==x){
                return mid;
            }
            if((long)mid*mid<x){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=(s+e)/2;

        }

        return s-1;
        
    }
};