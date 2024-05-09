class Solution {
public:
    int minimumCost(vector<int>& cost) {
    sort(cost.begin(), cost.end(),greater<int>());
    queue<int> array;
    for (int i = 0; i < cost.size(); i++) {
        array.push(cost[i]);
    }
    int sum=0;
    for (int i = 0; i < cost.size(); i++) {
        for (int j = 0; j < 2; j++) {
            if (!array.empty()) {
                sum = sum + array.front();
                array.pop();
            }
        }
        if (!array.empty()) {
            array.pop();
        }
    }
    return sum;
}
};