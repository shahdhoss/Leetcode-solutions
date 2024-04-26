class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> array(obstacleGrid.size(),
                                  vector<int>(obstacleGrid[0].size()));
        for (int i = 0; i < array.size(); i++) {
            for (int j = 0; j < array[0].size(); j++) {
                if (i == 0 && j == 0) {
                     if (obstacleGrid[i][j] != 1) {
                        array[i][j] = 1;
                    } else {
                        array[i][j] = 0;
                     }
                } else if (i == 0) {
                    if (obstacleGrid[i][j] != 1) {
                        array[i][j] = array[i][j-1];
                    } else {
                        array[i][j] = 0;
                    }
                } else if (j == 0) {
                    if (obstacleGrid[i][j] != 1) {
                        array[i][j] = array[i-1][j];
                    } else {
                        array[i][j] = 0;
                    }
                } else if(obstacleGrid[i][j]==0){
                    array[i][j] = array[i - 1][j] + array[i][j - 1];
                }else{
                    array[i][j]=0;
                }
            }
        }
        return array[array.size() - 1][array[0].size() - 1];
    }
};