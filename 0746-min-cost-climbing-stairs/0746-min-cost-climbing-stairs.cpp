class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> array(cost.size());
        if (array.size() >= 1) {
            array[0] = cost[0];
        }
        if (array.size() >= 2) {
            array[1] = cost[1];
        }
        if (array.size() > 2) {
            for (int i = 2; i < array.size(); i++) {
                array[i] = min(cost[i] + array[i - 1], cost[i] + array[i - 2]);
            }
        }
        int min = INT_MIN;
        if (array[array.size() - 1] <= array[array.size() - 2]) {
            min = array[array.size() - 1];
        } else {
            min = array[array.size() - 2];
        }
        return min;
    }
};