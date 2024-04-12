class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int remainder;
        vector<vector<int>> array(coins.size(), vector<int>(amount + 1));
        for (int i = 0; i < array.size(); i++) {
            for (int j = 0; j < array[i].size(); j++) {
                remainder = j - coins[i];
                if (i == 0) {
                    if (remainder == 0) {
                        array[i][j] = 1;
                    } else if (remainder > 0) {
                        array[i][j] = array[i][remainder];
                    } else if (j == 0) {
                        array[i][j] = 1;
                    }
                } else {
                    if (remainder >= 0) {
                        array[i][j] = (array[i][remainder] + array[i - 1][j]);
                    } else if (remainder < 0) {
                        array[i][j] = array[i - 1][j];
                    } else if (j == 0) {
                        array[i][j] = 1;
                    }
                }
            }
        }
        return array[coins.size() - 1][amount];
    }
};