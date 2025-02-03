class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == -1) {
                    int max = INT_MIN;
                    int cols = j;
                    for (int k = 0; k < row; k++) {
                        if (max < matrix[k][cols]) {
                            max = matrix[k][cols];
                        }
                    }
                    matrix[i][j] = max;
                }
            }
        }
        return matrix;
        
    }
};