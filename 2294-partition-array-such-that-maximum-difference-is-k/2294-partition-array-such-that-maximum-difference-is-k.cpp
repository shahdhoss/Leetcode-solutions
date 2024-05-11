class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum = 1;
        int max = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] - max > k) {
                sum++;
                max = nums[i];
            }
        }
        return sum;
    }
};