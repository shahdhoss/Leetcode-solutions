class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> array(nums.size());
        array[0] = nums[0];
        int max = INT_MIN, sum;
        for (int i = 1; i < nums.size(); i++) {
            sum = nums[i] + array[i - 1];
            if (sum > nums[i]) {
                array[i] = sum;
            } else {
                array[i] = nums[i];
            }
        }
        for (int i = 0; i < array.size(); i++) {
            if (max < array[i]) {
                max = array[i];
            }
        }
        return max;
    }
};