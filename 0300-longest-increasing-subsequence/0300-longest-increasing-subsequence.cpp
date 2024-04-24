class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> array(nums.size());
        array[0] = 1;
        int max, temp;
        if (nums.size() >= 2) {
            for (int i = 1; i < nums.size(); i++) {
                max = 1;
                for (int j = 0; j < i; j++) {
                    if (nums[i] > nums[j]) {
                        temp = array[j] + 1;
                        if (temp > max) {
                            max = temp;
                        }
                    }
                }
                array[i] = max;
            }
        }
        max = INT_MIN;
        for (int i = 0; i < array.size(); i++) {
            if (array[i] > max) {
                max = array[i];
            }
        }
        return max;
    }
};