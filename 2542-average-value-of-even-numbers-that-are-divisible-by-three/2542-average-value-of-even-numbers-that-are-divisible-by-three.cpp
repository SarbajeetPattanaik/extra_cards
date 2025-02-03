class Solution {
public:
    int averageValue(vector<int>& nums) {
         int sum = 0;
        int sumCount=0;
        for(int i : nums)
        {
            if( i%2==0 && i%3 ==0 )
            {
                sum+=i;
                sumCount++;
            }
        }
        if(sumCount==0) return 0;
        return round(sum/sumCount);
        
    }
};