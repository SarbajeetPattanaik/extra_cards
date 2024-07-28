class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        
//         cout<<sx<<" "<<sy<<endl;
        
        
//         if(sx>tx|| sy>ty){return false;}
//         if(tx==sx&&ty==sy){
//             return true;
//         }
        
//         return reachingPoints(sx,sx+sy,tx,ty)||reachingPoints(sx+sy,sy,tx,ty);
        
        while (tx >= sx && ty >= sy) {
            if (tx == sx && ty == sy) {
                return true;
            }

            if (tx > ty) {
                int n = ((tx - sx)/ ty);
                if(n==0){return false;}
               
                tx = tx - n * ty;
            } else {
                int n = ((ty - sy)/ tx);
                if(n==0){return false;}
                ty = ty - n * tx;
            }
        }
        return false;
        
    }
};