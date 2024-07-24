class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        
        int c1=0,c2=0,n=nums.size();
        if(n==1){
            return {nums[0]};
        }
        
        int e1=INT_MIN,e2=INT_MIN;
        
        
        for(int i=0;i<n;i++){
            if(c1==0&&nums[i]!=e2){
                e1=nums[i];
                c1++;
            }
            else if(c2==0&&nums[i]!=e1){
                e2=nums[i];
                c2++;
            }
            else if(nums[i]==e1){
                c1++;
            }
            else if(nums[i]==e2){
                c2++;
            }
            else if(nums[i]!=e1){
                c1--;c2--;
            }
            else if(nums[i]!=e2){
                c2--;c1--;
            }   
            
        }
        c1=count(nums.begin(),nums.end(),e1);
        c2=count(nums.begin(),nums.end(),e2);
        cout<<e1<<c1;
        vector<int> res;
        if(c1>n/3){
            res.push_back(e1);
        }
        if(c2>n/3&&e1!=e2){
            res.push_back(e2);
        }
        return res;
        
        
        
        
        
    }
};