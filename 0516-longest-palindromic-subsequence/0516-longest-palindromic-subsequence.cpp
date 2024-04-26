class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string original = s;
        original = " " + s;
        reverse(s.begin(), s.end());
        s = " " + s;
        int rows = s.length(), columns = original.length();
        vector<vector<int>> array(rows, vector<int>(columns, 0));
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < columns; j++) {
                if (s[i] == original[j]) {
                    array[i][j] = array[i - 1][j - 1] + 1;
                } else {
                    array[i][j] = max(array[i - 1][j], array[i][j - 1]);
                }
            }
        }
        return array[rows-1][columns-1];
    }
};