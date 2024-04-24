class Solution {
public:
    int uniquePaths(int m, int n) {
        if (m == 0 && n == 0) {
            return 0;
        }
        if (m == 1 && n == 1) {
            return 1;
        }
        vector<vector<int>> array(m, vector<int>(n, 1));
        array[0][0] = 0;
        for (int i = 1; i < array.size(); i++) {
            for (int j = 1; j < array[i].size(); j++) {
                array[i][j] = array[i - 1][j] + array[i][j - 1];
            }
        }
        return array[m - 1][n - 1];
    }
};