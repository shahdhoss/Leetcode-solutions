class Solution {
public:
    int minOperations(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int sum = 0,new_num;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <=nums[i - 1]) {
                new_num = nums[i]+((nums[i - 1] + 1) - nums[i]);
                sum = sum + ((nums[i - 1] + 1) - nums[i]);
                nums[i]=new_num;
            }
        }
        return sum;
    }
};