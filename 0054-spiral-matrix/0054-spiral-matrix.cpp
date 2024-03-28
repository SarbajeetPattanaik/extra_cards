class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int rStart=0;
        int cStart=0;
        int rEnd=r-1;
        int cEnd=c-1;
        int count=0;
        vector<int> ans;
        while(count<r*c){
            //firstrow
            for(int i=cStart;i<=cEnd&&count<r*c;i++){
                ans.push_back(matrix[rStart][i]);
                count++;
            }
            rStart++;
            //end col
            for(int i=rStart;i<=rEnd&&count<r*c;i++){
                ans.push_back(matrix[i][cEnd]);
                count++;
            }
            cEnd--;
            //last row
            for(int i=cEnd;i>=cStart&&count<r*c;i--){
                ans.push_back(matrix[rEnd][i]);
                count++;
            }
            rEnd--;
            // first col
            for(int i=rEnd;i>=rStart&&count<r*c;i--){
                ans.push_back(matrix[i][cStart]);
                count++;
            }
            cStart++;


        }
        return ans;
    }
};