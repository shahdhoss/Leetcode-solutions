class Solution {
public:
int coinChange(vector<int>& coins, int amount) {
    vector<int> temp(amount + 1, INT_MAX);
    sort(coins.begin(), coins.end());
    temp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < (int)coins.size(); j++) {
            if (coins[j] <= i) {
                int remainder = i - coins[j];
                if (temp[remainder] != INT_MAX && 1 + temp[remainder] < temp[i]) {
                    temp[i] = 1 + temp[remainder];
                }
            }
        }
    }
    return (temp[amount] == INT_MAX) ? -1 : temp[amount];
}
};