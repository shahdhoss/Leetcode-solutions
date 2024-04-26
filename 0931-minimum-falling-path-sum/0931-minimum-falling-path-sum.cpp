class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>> array(matrix.size(),
                                  vector<int>(matrix[0].size(), INT_MAX));
        for (int i = 0; i < array.size(); i++) {
            for (int j = 0; j < array[0].size(); j++) {
                if (i == 0) {
                    array[i][j] = matrix[i][j];
                } else {
                    array[i][j] =
                        matrix[i][j] +
                        min(array[i - 1][j],
                            min(j > 0 ? array[i - 1][j - 1] : INT_MAX,
                                j < matrix[0].size() - 1 ? array[i - 1][j + 1]
                                                         : INT_MAX));
                }
            }
        }
        int minSum = INT_MAX;
        for (int j = 0; j < array[0].size(); j++) {
            minSum = min(minSum, array[array.size() - 1][j]);
        }
        return minSum;
    }
};