class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < k; i++) {
            sum = sum + nums[nums.size() - 1];
            nums[nums.size() - 1] = nums[nums.size() - 1] + 1;
        }
        return sum;
    }
};