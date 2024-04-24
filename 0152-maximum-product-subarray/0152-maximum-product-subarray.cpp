class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> array1(nums.size());
        vector<int> array2(nums.size());
        array1[0] = nums[0];
        array2[0] = nums[0];
        if (nums.size() >=2) {
            for (int i = 1; i < nums.size(); i++) {
                array1[i] = min(nums[i],min(array1[i - 1] * nums[i],array2[i - 1] * nums[i]));
                array2[i] = max(nums[i],max(array1[i - 1] * nums[i],array2[i - 1] * nums[i]));
            }
        }
        int maxx = INT_MIN;
        for (int i = 0; i < array1.size(); i++) {
            if (array1[i] > maxx) {
                maxx = array1[i];
            }
        }
        for (int i = 0; i < array2.size(); i++) {
            if (array2[i] > maxx) {
                maxx = array2[i];
            }
        }
        return maxx;
    }
};