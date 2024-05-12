class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int size = 0;
        for (int i = 0; i < piles.size(); i++) {
            size = size + 1;
        }
        sort(piles.begin(), piles.end(), greater<int>());
        queue<int> me_and_alice;
        for (int i = 0; i <piles.size()-(size/3); i++) {
            me_and_alice.push(piles[i]);
        }
        int target, sum = 0;
        while (!me_and_alice.empty()) {
            me_and_alice.pop();
            if (!me_and_alice.empty()) {
                target = me_and_alice.front();
                sum = sum + target;
                me_and_alice.pop();
            }
        }
        return sum;
    }
};