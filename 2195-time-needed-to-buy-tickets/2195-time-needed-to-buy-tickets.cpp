class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int sum = 0, counter = 0;
        for (int i = 0; i < tickets.size(); i++) {
            sum = sum + tickets[i];
        }
        for (int i = 0; i < sum; i++) {
            for (int j = 0; j < tickets.size(); j++) {
                if (tickets[j] != 0) {
                    tickets[j]--;
                    counter++;
                }
                if (k == j && tickets[j] == 0) {
                    return counter;
                }
            }
        }
        return counter;
    }
};