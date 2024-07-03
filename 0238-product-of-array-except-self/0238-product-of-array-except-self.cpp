class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        vector<int> answer(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            product=product*nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                int prod2=1;
                for(int j=0;j<nums.size();j++){
                    if(j!=i){
                        prod2=prod2*nums[j];
                    }
                }
                answer[i]=prod2;
            }
            else{
                answer[i]=product/nums[i];
            }
        }
    return answer;
    }
};