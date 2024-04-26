class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        text1=" "+text1;
        text2=" "+text2;
        int rows=text1.length(), columns=text2.length();
        if (rows == 0 && columns == 0) {
            return 0;
        }
        vector<vector<int>> array(rows, vector<int>(columns, 0));
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < columns; j++) {
                if (text1[i] == text2[j]) {
                    array[i][j] =array[i - 1][j-1]+1;
                } else {
                    array[i][j] = max(array[i - 1][j], array[i][j - 1]);
                    array[i][j]=  max(array[i][j],array[i-1][j-1]);
                }
            }
        }
        return array[rows-1][columns-1];
    }
};