class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r=n;
        int c=n;
        int rStart=0;
        int cStart=0;
        int rEnd=r-1;
        int cEnd=c-1;
        int count=1;
    
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        while(count<=r*c){
            //firstrow
            for(int i=cStart;i<=cEnd&&count<=r*c;i++){
                matrix[rStart][i]=count;
                count++;
            }
            rStart++;
            //end col
            for(int i=rStart;i<=rEnd&&count<=r*c;i++){
                matrix[i][cEnd]=count;
                count++;
            }
            cEnd--;
            //last row
            for(int i=cEnd;i>=cStart&&count<=r*c;i--){
                matrix[rEnd][i]=count;
                count++;
            }
            rEnd--;
            // first col
            for(int i=rEnd;i>=rStart&&count<=r*c;i--){
                matrix[i][cStart]=count;
                count++;
            }
            cStart++;


        }
        return matrix;
    }
};