class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        vector<int> answer(nums.size(),1);
        unordered_map<int,int> hashmap;
        hashmap[nums[0]]=0;
        for(int i=1;i<nums.size();i++){
            hashmap[nums[i]]=i;
            if(hashmap.count(nums[i]-1)>0){
                int temp=hashmap[nums[i]-1];
                answer[i]=max(answer[temp]+1,answer[i-1]);
            }
        }
        int maximum=INT_MIN;
        for(int i=0;i<answer.size();i++){
            if(answer[i]>maximum){
                maximum=answer[i];
            }
        }
        return maximum;
    }
};