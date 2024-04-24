class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> array(grid.size(), vector<int>(grid[0].size(), 0));
        for (int i = 0; i < 1; i++) {
            // cout << "im herree";
            for (int j = 0; j < grid[i].size(); j++) {
                if (j == 0) {
                    array[i][j] = grid[i][j];
                } else {
                    array[i][j] = grid[i][j] + array[i][j - 1];
                }
            }
        }
        for (int i = 1; i < grid.size(); i++) {
            for (int j = 0; j < 1; j++) {
                array[i][j] = array[i - 1][j] + grid[i][j];
            }
        }
        for (int i = 1; i < grid.size(); i++) {
            for (int j = 1; j < grid[i].size(); j++) {
                array[i][j] = min(grid[i][j] + array[i - 1][j],
                                  grid[i][j] + array[i][j - 1]);
            }
        }
        return array[grid.size() - 1][grid[0].size() - 1];
    }
};