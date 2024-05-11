class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int> answer;
        int sum;
        int prev;
        for (int i = 0; i < queries.size(); i++) {
            sum = 0;
            prev = 0;
            for (int j = 0; j < nums.size(); j++) {
                prev = prev + nums[j];
                if (prev <= queries[i]) {
                    sum = sum + 1;
                } else {
                    break;
                }
            }
            answer.push_back(sum);
        }
        return answer;
    }
};