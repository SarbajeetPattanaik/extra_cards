class Solution {
public:
    string oddString(vector<string>& words) {
        vector<int>diff1, diff2;
        for (int i = 1; i < words[0].size(); i++){
            diff1.push_back(words[0][i] - words[0][i - 1]);
            diff2.push_back(words[1][i] - words[1][i - 1]);
        }
        if (diff1 == diff2){
            for (int i = 2; i < words.size(); i++){
                vector<int> currDiff;
                for (int j = 1; j < words[i].size(); j++){
                    currDiff.push_back(words[i][j] - words[i][j - 1]);
                }
                if (currDiff != diff1){
                    return words[i];
                }
            }
        }
        vector<int>diff3;
        for (int i = 1; i < words[2].size(); i++){
            diff3.push_back(words[2][i] - words[2][i - 1]);
        }
        return (diff1 == diff3) ? words[1] : words[0];
        
    }
};