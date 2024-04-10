class Solution {
public:
    int climbStairs(int n) {
        vector<int> temp(n + 1, 0);
        temp[1] = 1;
        if (n >= 2) {
            temp[2] = 2;
            if (n >= 3) {
                for (int i = 3; i < temp.size(); i++) {
                    temp[i] = temp[i - 1] + temp[i - 2];
                }
            }
        }
        return temp[n];
    }
};