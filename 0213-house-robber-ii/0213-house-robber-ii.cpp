class Solution {
public:
    int rob2(vector<int>& nums) {
        int maxx;
        vector<int> array(nums.size());
        if (nums.empty()) {
            return 0;
        }
        if (nums.size() >= 1) {
            array[0] = nums[0];
            maxx = array[0];
        }
        if (array.size() > 1) {
            array[1] = nums[1];
            maxx = max(array[1], array[0]);
        }
        if (array.size() > 2) {
            array[2] = nums[0] + nums[2];
            maxx = max(array[1], array[2]);
            for (int i = 3; i < nums.size(); i++) {
                array[i] = max(nums[i] + array[i - 2], nums[i] + array[i - 3]);
                if (array[i] > maxx) {
                    maxx = array[i];
                }
            }
        }
        return maxx;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int> array1, array2;
        for (int i = 0; i < nums.size() - 1; i++) {
            array1.push_back(nums[i]);
        }
        for (int i = 1; i < nums.size(); i++) {
            array2.push_back(nums[i]);
        }
        return max(rob2(array1), rob2(array2));
    }
};