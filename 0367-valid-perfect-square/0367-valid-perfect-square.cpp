class Solution {
public:
    bool isPerfectSquare(int num) {

// 1 = 1
// 1+3 = 4
// 1 + 3 + 5 = 9
// 1 + 3 + 5 + 7 = 16
        int i=1;
        while(num>0){
            num-= i;      
            i+=2;        
            if(!num) return true;
        }
        return false;
        
    }
};