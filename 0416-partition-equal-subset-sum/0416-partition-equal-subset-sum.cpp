class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        if (sum % 2 != 0) {
            return false;
        }
        int target = sum / 2;
        vector<bool> array(target + 1, false);
        array[0] = true;
        for (int num : nums) {
            for (int i = target; i >= num; i--) {
                array[i] = array[i] || array[i - num];
            }
        }
        return array[target];
    }
};