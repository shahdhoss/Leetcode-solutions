class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hashmap;
        for(int i=0 ; i<nums.size() ; i++){
            hashmap[nums[i]]=hashmap[nums[i]]+1;
        }
        for(const auto& pair:hashmap){
            if(pair.second>1){
                return true;
            }
        }
        return false;
    }
};