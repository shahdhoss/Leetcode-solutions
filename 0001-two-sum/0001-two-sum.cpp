class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int temp;
        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            temp=target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==temp){
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
            }
        }
        return answer;
    }
};